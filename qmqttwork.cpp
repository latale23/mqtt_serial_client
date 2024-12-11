#include "qmqttwork.h"

QMutex mutexClient_;
QMutex mutexSubTopic_;
QMutex mutexPubTopic_;

struct strMqttClient strMqttClient_;
QString sPubTopic;
QVector<QString> sSubTopic;


QMqttWork::QMqttWork(QObject *parent) : QObject(parent)
{

}

QMqttWork::~QMqttWork()
{
    delete client;
}

// 判断 ip 和 port 是否正确
bool QMqttWork::getIPPort(const QString &sIpPort, QString & ip, int & port)
{
    static QRegularExpression regularIpPort(R"(^((?：\d{1,3}\.){3}\d{1,3})：(\d{1,5})$)");
    QRegularExpressionMatch matchIpPort = regularIpPort.match(sIpPort);

    if(matchIpPort.hasMatch())
    {
        ip = matchIpPort.captured(1);
        port = matchIpPort.captured(2).toInt();
        return true;
    }
    return false;
}

// 连接服务器
void QMqttWork::sltConerver()
{
    mutexClient_.tryLock();
    client->setClientId(strMqttClient_.sClient);
    client->setPassword(strMqttClient_.sPassword);
    QString s_ip_port = strMqttClient_.sIpPort;
    mutexClient_.unlock();

    // 判断 ip port 是否合法
    QString ip;
    int port, ret;
    ret = getIPPort(s_ip_port, ip, port);
    if(ret)
    {
        qDebug() << s_ip_port << " : " << port;
        client->setHostname(ip);
        client->setPort(port);
        client->connectToHost();
    }
    else
    {
        // 弹出边框 提示 ip port 格式
        qDebug() << "输入 ip port 错误";
        logErrorType type = logErrorType::errIpPort;
        emit QMqttWork::mqttLoginError(type);

    }

    // client->setHostname();
    // client->setPort();
}

#ifndef QMQTTWORK_H
#define QMQTTWORK_H

#include <QMqttClient>
#include <QString>
#include <QMutex>
#include <QVector>
#include <QRegularExpression>

#include <QMessageBox>

struct strMqttClient
{
    QString sIpPort;
    QString sClient;
    QString sPassword;
};

enum logErrorType
{
    errIpPort,
    errClientPassword
};

class QMqttWork : public QObject
{
    Q_OBJECT

public:
    explicit QMqttWork(QObject *parent = nullptr);
    ~QMqttWork();

signals:
    void mqttLoginError(enum logErrorType);

public slots:
    void sltConerver();


private:
    QMqttClient * client;

    bool getIPPort(const QString &sIpPort, QString & ip, int & port);
    // 连接到发布者 服务器使用一个 broker 发布消息
    void connectToBroker(const QString &host, int port);
    // 掉线重连

    // 接收话题



    // 发布话题
    void publishMessage(const QString &topic, const QString &message);
    void processMqttData(); // 收到数据后的处理逻辑

};

#endif // QMQTTWORK_H

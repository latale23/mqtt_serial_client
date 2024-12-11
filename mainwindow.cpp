#include <QString>
#include <QDebug>
#include "mainwindow.h"
#include "./ui_mainwindow.h"


extern QMutex mutexClient_;
extern struct strMqttClient strMqttClient_;


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    // 创建线程对象
    QThread * mqttThread = new QThread(this);
    // 把工作对象移动到线程
    QMqttWork * qMqttWork_ = new QMqttWork();
    qMqttWork_->moveToThread(mqttThread);
    // 开始线程
    mqttThread->start();

    ui->lineEdit->installEventFilter(this);
    ui->lineEdit_2->installEventFilter(this);
    ui->lineEdit_3->installEventFilter(this);
    ui->lineEdit_4->installEventFilter(this);
    ui->lineEdit_5->installEventFilter(this);



    // 连接按钮 -> 修改账 号密码 ip_port
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::sltConerver);
    // 连接按钮 -> 登陆
    connect(ui->pushButton, &QPushButton::clicked, qMqttWork_, &QMqttWork::sltConerver);

    // QMessageBox
    connect(qMqttWork_, &QMqttWork::mqttLoginError, this, &MainWindow::showMessageBox, Qt::QueuedConnection);

}

MainWindow::~MainWindow()
{
    delete ui;
}


bool MainWindow::eventFilter(QObject * watched, QEvent * event)
{

    // 客户端 id
    if(watched == ui->lineEdit)
    {
        if(event->type() == QEvent::FocusIn)
        {
            mutexClient_.tryLock();
            ui->lineEdit->clear();
            mutexClient_.unlock();
        }
        else if(event->type() == QEvent::FocusOut)
        {
            mutexClient_.tryLock();
            strMqttClient_.sClient = ui->lineEdit->text();
            mutexClient_.unlock();
        }
        return false;
    }

    // 客户端 密码
    if(watched == ui->lineEdit_2)
    {

        if(event->type() == QEvent::FocusIn)
        {
            mutexClient_.tryLock();
            ui->lineEdit_2->clear();
            mutexClient_.unlock();
        }
        else if(event->type() == QEvent::FocusOut)
        {
            mutexClient_.tryLock();
            strMqttClient_.sPassword = ui->lineEdit_2->text();
            mutexClient_.unlock();
        }
        return false;
    }

    // ip：port
    if(watched == ui->lineEdit_3)
    {

        if(event->type() == QEvent::FocusIn)
        {
            mutexClient_.tryLock();
            ui->lineEdit_3->clear();
            mutexClient_.unlock();
        }
        else if(event->type() == QEvent::FocusOut)
        {
            mutexClient_.tryLock();
            strMqttClient_.sIpPort = ui->lineEdit_3->text();
            mutexClient_.unlock();
        }

        return false;
    }

    // 订阅主题
    if(watched == ui->lineEdit_4)
    {

        if(event->type() == QEvent::FocusIn)
        {

        }
        else if(event->type() == QEvent::FocusOut)
        {

        }

        return false;
    }

    // 发布主题
    if(watched == ui->lineEdit_5)
    {
        if(event->type() == QEvent::FocusIn)
        {

        }
        else if(event->type() == QEvent::FocusOut)
        {

        }

        return false;
    }

    return false;
}

void MainWindow::sltConerver()
{
    ui->pushButton->setText("断开连接");
    mutexClient_.tryLock();
    qDebug() << "账户：\t" << strMqttClient_.sClient;
    qDebug() << "密码：\t" << strMqttClient_.sPassword;
    qDebug() << "服务器地址：\t" << strMqttClient_.sIpPort;
    mutexClient_.unlock();
}

void MainWindow::showMessageBox(enum logErrorType)
{
    qDebug() << "登陆错误，重新输入 ip : port";
    QMessageBox::information(this, "提示", "登陆错误，重新输入 ip : port");
    // ui->pushButton->setText("连接");
}

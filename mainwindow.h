#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QComboBox>
#include <QTextBrowser>
#include <QMessageBox>

#include <QThread>


#include "qmqttwork.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // 重写 eventFilter
    bool eventFilter(QObject * watched, QEvent * event) override;



private:
    Ui::MainWindow *ui;
    QMqttWork * qMqttWork_;



private slots:
    void sltConerver();

    void showMessageBox(enum logErrorType);

};
#endif // MAINWINDOW_H

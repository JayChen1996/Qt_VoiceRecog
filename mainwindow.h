#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QAudioRecorder>
#include <QAudio>
#include <QIODevice>
#include <QAudioOutput>
#include <QtDataVisualization/Q3DBars>
#include <QtDataVisualization/qbardataproxy.h>
#include "audiorecorder.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    // 用于接收麦克风的数据
    QAudioInput *input;
    // QIODevice *inputDevice;
    QAudioDeviceInfo inputDevice = QAudioDeviceInfo::defaultInputDevice();

    AudioRecorder *recorder;





private slots:
    void on_voiRec_begin_pb_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

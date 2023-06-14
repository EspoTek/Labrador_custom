#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

#ifdef PLATFORM_ANDROID
    //Android default font sizes are just plain ridiculous
    QFont font = qApp->font();
    font.setPointSize(12);
    qApp->setFont(font);
#endif

    MainWindow w;
    // w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint | Qt::WindowCloseButtonHint);
    w.showFullScreen();

    return a.exec();
}

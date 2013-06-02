#include <QApplication>
#include <QTextCodec>
#include "mainwindow.h"


int main(int argc, char **argv){
	QApplication app(argc, argv);
	QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

	MainWindow *window=new MainWindow(&app);
	window->show();

	return app.exec();
}

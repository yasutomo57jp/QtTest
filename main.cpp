#include <QApplication>
#include <QLabel>
#include <QPushButton>

int main(int argc, char **argv){
	QApplication app(argc, argv);

	QPushButton *button=new QPushButton("Hello");
	button->show();

	//QLabel *label=new QLabel("Hello");
	//label->show();

	return app.exec();
}

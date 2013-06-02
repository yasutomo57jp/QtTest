#include "mainwindow.h"

MainWindow::MainWindow(QObject* app, QWidget* parent){
	layout=new QHBoxLayout;
	button=new QPushButton(QObject::tr("閉じる"));
	button2=new QPushButton(QObject::tr("表示変更"));
	button3=new QPushButton(QObject::tr("追加"));
	button4=new QPushButton(QObject::tr("削除"));
	label=new QLabel("Hello");
	edit=new QLineEdit;

	QObject::connect(button, SIGNAL(clicked()), app, SLOT(quit()));
	QObject::connect(edit, SIGNAL(textChanged(QString)), this, SLOT(setWindowTitle(QString)));
	QObject::connect(button2, SIGNAL(clicked()), this, SLOT(setLabelText()));
	QObject::connect(button3, SIGNAL(clicked()), this, SLOT(addLabel()));
	QObject::connect(button4, SIGNAL(clicked()), this, SLOT(removeLabel()));


	button->setFont(QFont("Ricty", 40));
	button2->resize(200,100);

	layout->addWidget(button);
	layout->addWidget(button2);
	layout->addWidget(button3);
	layout->addWidget(button4);
	layout->addWidget(edit);
	layout->addWidget(label);

	this->setLayout(layout);
}

void MainWindow::setLabelText(){
	QString text=edit->text();
	label->setText(text);
}

void MainWindow::addLabel(){
	QString str=edit->text();
	QLabel *l=new QLabel(str);
	layout->addWidget(l);
	labels.push_back(l);
}

void MainWindow::removeLabel(){
	if(labels.size()>0){
		QLabel *l=labels.back();
		delete l;
		labels.pop_back();
	}
}

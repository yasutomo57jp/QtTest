#pragma once

#include <vector>
#include <QWidget>
#include <QHBoxLayout>
#include <QFont>

#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

class MainWindow: public QWidget{
	Q_OBJECT
	public: MainWindow(QObject *app, QWidget* parent=0);
	private slots:
		void setLabelText();
		void addLabel();
		void removeLabel();
	private:
	QHBoxLayout *layout;
	QPushButton *button;
	QPushButton *button2;
	QPushButton *button3;
	QPushButton *button4;
	QLabel *label;
	QLineEdit *edit;
	std::vector<QLabel*> labels;
};

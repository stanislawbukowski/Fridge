#include "Encyclopedia.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{

	QApplication a(argc, argv);
	Encyclopedia w;
	w.show();
	return a.exec();
}

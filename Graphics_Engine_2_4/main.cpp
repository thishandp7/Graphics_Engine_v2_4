#include "Graphics_Engine_2_4.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Graphics_Engine_2_4 w;
	w.show();
	return a.exec();
}

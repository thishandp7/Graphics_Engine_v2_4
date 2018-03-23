#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Graphics_Engine_2_4.h"

class Graphics_Engine_2_4 : public QMainWindow
{
	Q_OBJECT

public:
	Graphics_Engine_2_4(QWidget *parent = Q_NULLPTR);

private:
	Ui::Graphics_Engine_2_4Class ui;
};

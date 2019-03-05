#pragma once
#include "Fridge.h"
#include "Household_product.h"
#include "washing_maschine.h"
#include "Digital_fridge.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <QWidget>
#include <qdialog.h>
#include <QWidget>
#include "ui_Present_objects.h"

class Present_objects : public QDialog
{
	Q_OBJECT

public:
	Present_objects(QDialog *parent = Q_NULLPTR);
	~Present_objects();
	vector <Household_product*> household_products;
	int number=0;
	void present();

private:
	Ui::Present_objects ui;
	QGraphicsScene g_scene;
	QPixmap p_map;

public slots:
 
    void back();
	void next();
	void previous();



};

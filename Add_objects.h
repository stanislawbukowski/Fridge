#pragma once
#include <vector>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <QWidget>
#include <qdialog.h>
#include "ui_Add_objects.h"
#include "Fridge.h"
#include "Digital_fridge.h"
#include "washing_maschine.h"
#include "Household_product.h"


class Add_objects : public QDialog
{
	Q_OBJECT

public:
	Add_objects(QDialog *parent = Q_NULLPTR);

	~Add_objects();

	vector<Household_product*> household_products;

private:
	Ui::Add_objects ui;

public slots:
    
void add_washing_maschine();
void add_fridge();
void add_digital_fridge();

};
#pragma once
#include "Add_objects.h"
#include "Fridge.h"
#include "Digital_fridge.h"
#include "Household_product.h"
#include "washing_maschine.h"
#include <QtWidgets/QMainWindow>
#include "ui_Encyclopedia.h"

class Encyclopedia : public QMainWindow
{
	Q_OBJECT

public:
	Encyclopedia(QWidget *parent = Q_NULLPTR);
	vector <Household_product*> household_products;

private:
	Ui::EncyclopediaClass ui;

public slots:
    void show_Add_objects();
	void show_Present_objects();
	void remove_all_objects();
	void save_vector_into_file();
};

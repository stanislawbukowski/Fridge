#include "Add_objects.h"
#include "Present_objects.h"
#include "Fridge.h"
#include "Digital_fridge.h"
#include "Household_product.h"
#include "washing_maschine.h"
#include "Encyclopedia.h"
#include "Add_objects.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <QMessageBox>

Encyclopedia::Encyclopedia(QWidget *parent)
	: QMainWindow(parent)
{

	ui.setupUi(this);
}
void Encyclopedia::show_Add_objects()
{
	Add_objects add_objects;
	add_objects.household_products= household_products;
	add_objects.exec();
	household_products = add_objects.household_products;

	

}
void Encyclopedia::remove_all_objects()
{
	if (household_products.size() == 0)
	{
		QMessageBox not;
		not.setText("Nie ma zadnych obiektow");
		not.exec();
	}
	else {


		for (int i = household_products.size() - 1; i >= 0; i--)
		{
			Household_product *hp = household_products[i];
			delete hp;
			hp = NULL;
		}
		household_products.clear();
		QMessageBox ok;
		ok.setText("Usunieto wszystkie obiekty");
		ok.exec();
	}
}
void Encyclopedia::show_Present_objects()
{
	if (household_products.size() == 0)
	{
		QMessageBox err;
		err.setText("Nie ma obiektow do wyswietlenia");
		err.exec();
		return;
	}
	Present_objects p_objects;
	p_objects.household_products = this->household_products;
	p_objects.present();
	p_objects.exec();
	household_products = p_objects.household_products;
}
void Encyclopedia::save_vector_into_file()
{
	fstream output_file;
	output_file.open("data.txt", ios::out);
	for (int i = 0; i < household_products.size(); i++)
	{
		household_products[i]->save_to_file(output_file);
	}

	output_file.close();
	QMessageBox mb;
	mb.setText("Zapisano plik");
	mb.exec();

}

#include <vector>
#include "Add_objects.h"
#include "washing_maschine.h"
#include "Fridge.h"
#include "Digital_fridge.h"
#include "Household_product.h"
#include <QMessageBox>

Add_objects::Add_objects(QDialog *parent) : QDialog(parent)
{
	ui.setupUi(this);
}

void Add_objects::add_washing_maschine()
{
	this->household_products.push_back(new Washing_maschine);
	QMessageBox mb;
	mb.setText("Pomyslnie dodano pralke");
	mb.exec();
}

void Add_objects::add_fridge()
{
	this->household_products.push_back(new Fridge);
	QMessageBox mb;
	mb.setText("Pomyslnie dodano lodowke");
	mb.exec();
}
void Add_objects::add_digital_fridge()
{
	this->household_products.push_back(new Digital_fridge);
	QMessageBox mb;
	mb.setText("Pomyslnie dodano multimedialna lodowke");
	mb.exec();
}

Add_objects::~Add_objects()
{

}
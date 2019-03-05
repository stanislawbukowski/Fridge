#include "Fridge.h"
#include <iostream>
#include <string>


using namespace std;

int Fridge::fridge_number = 0;

Fridge::Fridge()
{

	company = "Domyslna nazwa";
	power = 2500;
	max_shelf_number = 5;
	shelf_size = 300;
	type = 1;
	photo_path = "fridge.jpg";
	fridge_number++;
}

Fridge::Fridge(string company, int power, int max_shelf_number, int shelf_size)
{

	this->company = company;
	this->power = power;
	this->max_shelf_number = max_shelf_number;
	this->shelf_size = shelf_size;
	this->type = 1;
	this->photo_path = "fridge.jpg";
	fridge_number++;
}

Fridge::~Fridge()
{
	fridge_number--;
}

int Fridge::return_fridge_number()
{
	return fridge_number;
}

void Fridge::show_parameters()
{
	cout << "Firma: " << company << endl;
	cout << "Roczne zuzycie energii: " << power <<" [kWh]"<< endl;
	cout << "Maksymalna liczba polek: " << max_shelf_number << endl;
	cout << "Pojemnosc polki: " << shelf_size << endl;
	cout << endl;
}

void Fridge::save_to_file(fstream &plik)
{
	plik << *this;
}

void Fridge::read_from_file(fstream &plik)
{
	plik >> *this;
}

ostream& operator << (ostream &s, Fridge &fridge)
{
	s << "Lodowka: " << fridge.company << endl
		<< "Moc: " << fridge.power << endl
		<< "Maksymalna liczba polek: " << fridge.max_shelf_number << endl
		<< "Rozmiar polki: " << fridge.shelf_size << endl;

	return s;
}

istream& operator >> (istream&s, Fridge &fridge)
{
	s >> fridge.company
		>> fridge.power
		>> fridge.max_shelf_number
		>> fridge.shelf_size;
	return s;

}


#include "Digital_fridge.h"
#include <iostream>
#include <string>


using namespace std;

int Digital_fridge::digital_fridge_number = 0;

Digital_fridge::Digital_fridge()
{

	this->company = "Domyslna firma";
	this->power = 2000;
	this->max_shelf_number = 5;
	this->shelf_size = 300;
	this->speaker_power = 30;
	this->wifi_connection = 0;
	this->bluetooth_connection = 0;
	this->type = 3;
	this->photo_path = "digital_fridge.jpg";

	digital_fridge_number++;
	fridge_number++;
}

Digital_fridge::Digital_fridge(string company,int power, int max_shelf_number, int shelf_size, int speaker_power)
{
	this->company = company;
	this->power = power;
	this->max_shelf_number = max_shelf_number;
	this->shelf_size = shelf_size;
	this->speaker_power = speaker_power;
	this->bluetooth_connection = 0;
	this->wifi_connection = 0;
	this->type = 3;
	this->photo_path = "digital_fridge.jpg";
	digital_fridge_number++;
	fridge_number++;
}

Digital_fridge::~Digital_fridge()
{
	digital_fridge_number--;
	fridge_number--;
}

int Digital_fridge::return_digital_fridge_number()
{
	return digital_fridge_number;
}

ostream& operator << (ostream &s, Digital_fridge &Digital_fridge)
{
	s << "Lodowka multimedialna: " << Digital_fridge.company << endl
		<< "Moc: " << Digital_fridge.power << endl
		<< "Maksymalna liczba polek: " << Digital_fridge.max_shelf_number << endl
		<< "Rozmiar polki: " << Digital_fridge.shelf_size << endl
		<< "Moc glosnikow: " << Digital_fridge.speaker_power << endl
		<< "Wifi: " << Digital_fridge.wifi_connection << endl
		<< "Bluetooth: " << Digital_fridge.bluetooth_connection << endl;
	
	

	return s;
}

istream& operator >> (istream&s, Digital_fridge &Digital_fridge)
{
	s >> Digital_fridge.company
		>> Digital_fridge.power
		>> Digital_fridge.max_shelf_number
		>> Digital_fridge.shelf_size
		>> Digital_fridge.speaker_power
		>> Digital_fridge.wifi_connection
		>> Digital_fridge.bluetooth_connection;

	return s;

}

void Digital_fridge::show_parameters()
{
	cout << "Firma: " << company << endl;
	cout << "Roczne zu¿ycie energii: " << power << endl;
	cout << "Maksymalna liczba polek: " << max_shelf_number << endl;
	cout << "Pojemnosc polki: " << shelf_size << endl;
	cout << "Moc glosnikow: " << speaker_power << endl;
	cout << "Lacznosc Wifi: " << wifi_connection << endl;
	cout << "Lacznosc Bluetooth: " << bluetooth_connection << endl;
}

void Digital_fridge::save_to_file(fstream &plik)
{
	plik << *this;
}

void Digital_fridge::read_from_file(fstream &plik)
{
	plik >> *this;
}


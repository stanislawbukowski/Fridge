#include "washing_maschine.h"

using namespace std;

int Washing_maschine::wasching_maschine_number = 0;

Washing_maschine::Washing_maschine()
{
	company = "Domyslna nazwa";
	power = 2000;
	capacity = 20;
	type = 2;
	photo_path = "washing_maschine.jpg";


	wasching_maschine_number++;
}

Washing_maschine::Washing_maschine(string company, int power, int capacity)
{

	this->company = company;
	this->power = power;
	this->capacity = capacity;
	this->type = 2;
	this->photo_path = "washing_maschine.jpg";

	wasching_maschine_number++;
}

Washing_maschine::~Washing_maschine()
{
	wasching_maschine_number--;
}

ostream& operator << (ostream &s, Washing_maschine &Washing_machine)
{
	s << "Pralka: " << Washing_machine.company << endl
		<< "Moc: " << Washing_machine.power << endl
		<< "Pojemnosc: " << Washing_machine.capacity << endl;
		return s;
}

istream& operator >> (istream&s, Washing_maschine &Washing_machine)
{
	s >> Washing_machine.company
		>> Washing_machine.power
		>> Washing_machine.capacity;

	return s;

}

int Washing_maschine::return_wasching_maschine_number()
{
	return wasching_maschine_number;
}

void Washing_maschine::show_parameters()
{
	cout << "Pralka: " << company << endl;
	cout << "Roczne zuzycie energii: " << power<<" [kWh]" << endl;
	cout << "Pojemnosc: " << capacity << endl;

}

void Washing_maschine::save_to_file(fstream &plik)
{
	plik << *this;
}

void Washing_maschine::read_from_file(fstream &plik)
{
	plik >> *this;
}


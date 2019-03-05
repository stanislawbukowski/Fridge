#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Household_product
{
public:

	Household_product();

	int type;

	static int id;

	virtual ~Household_product();

	virtual void show_parameters() = 0;

	virtual void read_from_file(fstream &plik) = 0;

	virtual void save_to_file(fstream &plik) = 0;

	string photo_path = "AGD.jpg";



	string company;
	int power;
protected:
	int indeks;

};
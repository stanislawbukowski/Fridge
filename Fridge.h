#pragma once
#include <iostream>
#include <string>
#include"Household_product.h"
using namespace std;

class Fridge : public Household_product
{
	friend class Present_objects;

public:

	friend ostream& operator << (ostream &s, Fridge &fridge);

	friend istream& operator >> (istream &s, Fridge &fridge);

	Fridge();

	Fridge(string company, int power, int max_shelf_countity, int shelf_size);

	~Fridge();


	static int return_fridge_number();

	void show_parameters();

	void save_to_file(fstream &plik);

	void read_from_file(fstream &plik);

protected:

	int max_shelf_number;
	int shelf_size;
	static int fridge_number;

};
#pragma once
#include "Household_product.h"
#include <vector>
#include <string>


class Washing_maschine : public Household_product
{
public:
	friend class Present_objects;

	friend ostream& operator << (ostream &s, Washing_maschine &Washing_maschine);

	friend istream& operator >> (istream &s, Washing_maschine &Wasching_maschine);

	Washing_maschine();

	Washing_maschine(string company, int power, int capacity);

	~Washing_maschine();

	int return_wasching_maschine_number();

	void show_parameters();

	void save_to_file(fstream &plik);

	void read_from_file(fstream &plik);


private:
	static int wasching_maschine_number;
	int capacity;

};

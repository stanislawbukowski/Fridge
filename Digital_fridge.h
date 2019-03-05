#pragma once
#include <iostream>
#include <string>
#include"Fridge.h"
using namespace std;

class Digital_fridge : public Fridge
{

public:
	friend class Present_objects;

	friend ostream& operator << (ostream &s, Digital_fridge &digital_fridge);

	friend istream& operator >> (istream &s, Digital_fridge &digital_fridge);

	Digital_fridge();

	Digital_fridge(string company, int power, int max_shelf_countity, int shelf_size, int speaker_power);

	~Digital_fridge();

	static int return_digital_fridge_number();


	void show_parameters();

	void save_to_file(fstream &plik);

	void read_from_file(fstream &plik);

	

protected:

	static int digital_fridge_number;
	bool wifi_connection;
	bool bluetooth_connection;
	int speaker_power;



};
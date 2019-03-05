#include "Household_product.h"

int Household_product::id = 0;

Household_product::Household_product()
{
	company = "puste";
	power = 0;
	indeks = id;
	type = 0;
	id++;
}

Household_product::~Household_product()
{
}
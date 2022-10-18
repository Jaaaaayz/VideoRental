#include "Price.h"
#include "Movie.h"
#include "ChildrensPrice.h"

int ChildrensPrice::getPriceCode()
{
	return Movie::CHILDRENS;
}

double ChildrensPrice::getCharge(int daysRented)
{
	double result = 0;
	result += 1.5;
	if (daysRented > 3)
		result += (daysRented - 3) * 1.5;
	return result;
}

int ChildrensPrice::getFrequentRenterPoints(int daysRented)
{
	return 1;
}


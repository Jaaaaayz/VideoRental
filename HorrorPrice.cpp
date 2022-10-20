#include "Price.h"
#include "Movie.h"
#include "HorrorPrice.h"

int HorrorPrice::getPriceCode()
{
	return Movie::HORROR;
}

double HorrorPrice::getCharge(int daysRented)
{
	double result = 1;
	if (daysRented > 1)
		result += (daysRented - 1) * 1.5;
	return result;
}

int HorrorPrice::getFrequentRenterPoints(int daysRented)
{
	int Points = 1;

	if (daysRented > 1)
		Points++;

	return Points;
}


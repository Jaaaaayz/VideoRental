#include "Price.h"
#include "Movie.h"
#include "RegularPrice.h"

int RegularPrice::getPriceCode()
{
	return Movie::REGULAR;
}

double RegularPrice::getCharge(int daysRented)
{
	double result = 2;
	if (daysRented > 2)
		result += (daysRented - 2) * 1.5;

	return result;
}

int RegularPrice::getFrequentRenterPoints(int daysRented)
{
	return 1;
}

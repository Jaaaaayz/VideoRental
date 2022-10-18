#include "Price.h"
#include "Movie.h"
#include "NewReleasePrice.h"

int NewReleasePrice::getPriceCode()
{
	return Movie::NEW_RELEASE;
}

double NewReleasePrice::getCharge(int daysRented)
{
	return daysRented * 3;
}

int NewReleasePrice::getFrequentRenterPoints(int daysRented)
{
    int Points = 0;
    Points++;

    if (daysRented > 1)
        Points++;

    return Points;
}

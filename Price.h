//#include "Movie.h"

#pragma once
class Price
{
public:
	virtual int getPriceCode() = 0;
	virtual double getCharge(int daysRented) = 0;
	virtual int getFrequentRenterPoints(int daysRented) = 0;

};

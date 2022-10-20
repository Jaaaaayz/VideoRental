//#include "Movie.h"

#pragma once
class Price
{
public:
	Price(void);
	~Price(void);
	virtual int getPriceCode() = 0;
	virtual double getCharge(int daysRented) = 0;
	virtual int getFrequentRenterPoints(int daysRented) = 0;

};

inline Price::Price(void) {}
inline Price::~Price(void) {}

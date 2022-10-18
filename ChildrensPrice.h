#pragma once

class ChildrensPrice : virtual public Price
{
public:
	int getPriceCode();
	double getCharge(int daysRented);
	int getFrequentRenterPoints(int daysRented);
};


#pragma once

class HorrorPrice : virtual public Price
{
public:
	int getPriceCode();
	double getCharge(int daysRented);
	int getFrequentRenterPoints(int daysRented);
};


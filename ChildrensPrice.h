#pragma once

class ChildrensPrice : virtual public Price
{
public:
	ChildrensPrice(void);
	~ChildrensPrice(void);
	int getPriceCode();
	double getCharge(int daysRented);
	int getFrequentRenterPoints(int daysRented);
};

inline ChildrensPrice::ChildrensPrice(void) {}
inline ChildrensPrice::~ChildrensPrice(void) {}


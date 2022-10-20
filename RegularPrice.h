#pragma once

class RegularPrice : virtual public Price
{
public:
	RegularPrice(void);
	~RegularPrice(void);
	int getPriceCode();
	double getCharge(int daysRented);
	int getFrequentRenterPoints(int daysRented);
};

inline RegularPrice::RegularPrice(void) {}
inline RegularPrice::~RegularPrice(void) {}


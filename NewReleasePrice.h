#pragma once

class NewReleasePrice : virtual public Price
{
public:
	NewReleasePrice(void);
	~NewReleasePrice(void);
	int getPriceCode();
	double getCharge(int daysRented);
	int getFrequentRenterPoints(int daysRented);
};

inline NewReleasePrice::NewReleasePrice(void) {}
inline NewReleasePrice::~NewReleasePrice(void) {}


#pragma once

class HorrorPrice : virtual public Price
{
public:
	HorrorPrice(void);
	~HorrorPrice(void);
	int getPriceCode();
	double getCharge(int daysRented);
	int getFrequentRenterPoints(int daysRented);
};

inline HorrorPrice::HorrorPrice(void) {}
inline HorrorPrice::~HorrorPrice(void) {}

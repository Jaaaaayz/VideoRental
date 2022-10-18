// Movie.cpp
//#include "RegularPrice.h"
#include "Price.h"
#include "RegularPrice.h"
#include "NewReleasePrice.h"
#include "ChildrensPrice.h"
#include "Movie.h"

const int Movie::CHILDRENS;
const int Movie::REGULAR;
const int Movie::NEW_RELEASE;

Movie::Movie(const std::string& title, int priceCode)
{
	movieTitle = title;
	setPriceCode(priceCode);
}

void Movie::setPriceCode(int arg)
{
	switch (arg) {
	case REGULAR:
		m_pPrice = new RegularPrice();
		break;
	case NEW_RELEASE:
		m_pPrice = new NewReleasePrice();
		break;
	case CHILDRENS:
		m_pPrice = new ChildrensPrice();
		break;
	}
}

int Movie::getPriceCode() { 
	//return m_nPriceCode; 
	return m_pPrice->getPriceCode();
}

double Movie::getCharge(int daysRented) 
{
	return m_pPrice->getCharge(daysRented);
}
int Movie::getFrequentRenterPoints(int daysRented) 
{
	return m_pPrice->getFrequentRenterPoints(daysRented);
}
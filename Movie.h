// Movie.hh
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include "Price.h"


class Movie {
public:
  static const int CHILDRENS   = 2;
  static const int REGULAR     = 0;
  static const int NEW_RELEASE = 1;
  static const int HORROR	   = 3;

  Movie( const std::string& title, int priceCode = REGULAR );

  int getPriceCode() const;
  void setPriceCode( int arg );
  std::string getTitle() const;

  int getPriceCode();
  double getCharge(int daysRented);
  int  getFrequentRenterPoints(int daysRented);

private:
  std::string movieTitle;
  int moviePriceCode;

  Price *m_pPrice;
};

inline int Movie::getPriceCode() const { return moviePriceCode; }

inline std::string Movie::getTitle() const { return movieTitle; }


#endif // MOVIE_H

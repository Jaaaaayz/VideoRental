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
  ~Movie(void);

  void setPriceCode( int arg );
  std::string getstrPriceCode() const;
  std::string getTitle() const;

  int getPriceCode();
  double getCharge(int daysRented);
  int  getFrequentRenterPoints(int daysRented);

private:
  std::string movieTitle;
  std::string movieCode;
  int moviePriceCode;

  Price *m_pPrice;
};

// [ Jay ] 장르를 String으로 받아올 수 있도록 하는 get 함수 추가.
inline std::string Movie::getstrPriceCode() const { return movieCode; }

inline std::string Movie::getTitle() const { return movieTitle; }

inline Movie::~Movie(void) {}


#endif // MOVIE_H

// Customer.cc
#include <sstream>
#include <vector>
#include "Customer.h"

using std::ostringstream;
using std::vector;

std::string Customer::statement()
{
  double totalAmount = 0.;
  int frequentRenterPoints = 0;

  std::vector< Rental >::iterator iter = customerRentals.begin();
  std::vector< Rental >::iterator iter_end = customerRentals.end();

  // result will be returned by statement()
  std::ostringstream result;
  result << "Rental Record for " << getName() << "\n";

  // Loop over customer's rentals
  for ( ; iter != iter_end; ++iter ) {

    // [Jay] 불필요한 변수 삭제.
   // double thisAmount = 0;
    Rental each = *iter;

    // [Jay] Gets the rent calculated in the 'Rental' class.
    //thisAmount = each.AmountCalc();

    // Determine amounts for each rental
    /*switch ( each.getMovie().getPriceCode() ) {

      case Movie::REGULAR:
        thisAmount += 2.;
        if ( each.getDaysRented() > 2 )
          thisAmount += ( each.getDaysRented() - 2 ) * 1.5 ;
        break;

      case Movie::NEW_RELEASE:
        thisAmount += each.getDaysRented() * 3;
        break;

      case Movie::CHILDRENS:
        thisAmount += 1.5;
        if ( each.getDaysRented() > 3 )
          thisAmount += ( each.getDaysRented() - 3 ) * 1.5;
        break;
    }*/

    // Add frequent renter points
    frequentRenterPoints += each.getFrequentRenterPoints();

    // Add bonus for a two day new release rental
    // [Jay] frequentRenterPoints를 계산하는 것도 영화의 종류에 따라 달라지기 때문에 별도의 메서드로 호출.
    /*if ( ( each.getMovie().getPriceCode() == Movie::NEW_RELEASE )
         && each.getDaysRented() > 1 ) frequentRenterPoints++;*/

    // Show figures for this rental
    result << "\t" << each.getMovie().getTitle() << "\t"
           << each.getAmount() << std::endl;
    totalAmount += each.getAmount();
  }

  // Add footer lines
  result << "Amount owed is " << totalAmount << "\n";
  result << "You earned " << frequentRenterPoints
         << " frequent renter points";

  return result.str();
}

//[Jay] Implement a function that calculates amount.
//[Jay] Move the function because it uses the information in the 'Rental' class.
//double Customer::AmountCalc(Rental each)
//{
//    double thisAmount = 0;
//    switch (each.getMovie().getPriceCode()) {
//
//    case Movie::REGULAR:
//        thisAmount += 2.;
//        if (each.getDaysRented() > 2)
//            thisAmount += (each.getDaysRented() - 2) * 1.5;
//        break;
//
//    case Movie::NEW_RELEASE:
//        thisAmount += each.getDaysRented() * 3;
//        break;
//
//    case Movie::CHILDRENS:
//        thisAmount += 1.5;
//        if (each.getDaysRented() > 3)
//            thisAmount += (each.getDaysRented() - 3) * 1.5;
//        break;
//    }
//    return thisAmount;
//
//}


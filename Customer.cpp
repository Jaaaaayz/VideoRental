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

    // Add frequent renter points
    frequentRenterPoints += each.getFrequentRenterPoints();

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

std::string Customer::JSONStatement()
{
    std::ostringstream result;
    result << "\n\n=========================\n\n";
    result << "{\n";
    result << "\t\"Member\" : \"" << getName() << "\"" << ", " << "\n";
    result << "\t\"data\" :\n\t[\n";
    

    std::vector< Rental >::iterator iter = customerRentals.begin();
    std::vector< Rental >::iterator iter_end = customerRentals.end();


    for (; iter != iter_end; ++iter)
    {
        Rental each = *iter;
        
        // [ Jay ]  출력됐을 때 JSON 형식이 보기 좋게 보이도록 띄어쓰기 추가, 불필요시 삭제 가능.
        result << "\t\t{\n";
        result << "\t\t\t\" Code \" : \"" << each.getMovie().getstrPriceCode() << "\"" << ",\n"
            << "\t\t\t\" Title \" : \"" << each.getMovie().getTitle() << "\"" << ",\n"
            << "\t\t\t\" Days rented \" : \"" << each.getDaysRented() << "\"" << ",\n"
            << "\t\t\t\" Price \" : \"" << each.getAmount() << "\" \n";
        result << "\t\t}\n";
    }
    result << "\t]\n}";

    return result.str();
}



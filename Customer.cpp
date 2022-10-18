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



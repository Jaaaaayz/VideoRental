#include <sstream>
#include "Rental.h"


double Rental::getAmount()
{
    return  rentedMovie.getCharge(nDaysRented);
    
    //double Amount = 0;
    //// Determine amounts for each rental
    //switch ( getMovie().getPriceCode() ) {

    //  case Movie::REGULAR:
    //      Amount += 2.;
    //    if ( getDaysRented() > 2 )
    //        Amount += ( getDaysRented() - 2 ) * 1.5 ;
    //    break;

    //  case Movie::NEW_RELEASE:
    //      Amount += getDaysRented() * 3;
    //    break;

    //  case Movie::CHILDRENS:
    //      Amount += 1.5;
    //    if ( getDaysRented() > 3 )
    //        Amount += ( getDaysRented() - 3 ) * 1.5;
    //    break;
    //}

    //return Amount;
}

int Rental::getFrequentRenterPoints()
{
    return rentedMovie.getFrequentRenterPoints(nDaysRented);

   // int Points = 0;
   // Points++;

   // if ((getMovie().getPriceCode() == Movie::NEW_RELEASE)
   //     && getDaysRented() > 1) 
   //     Points++;

   // return Points;
    
}
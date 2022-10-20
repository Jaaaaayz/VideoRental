// Customer.hh
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "Rental.h"

// The customer class represents the customer of the store

class Customer {
public:
  Customer();
  explicit Customer( const std::string& name );
  ~Customer(void);

  void addRental( const Rental& arg );
  std::string getName() const;

  // Generate a statement for the customer
  std::string statement();
  // [ Jay ] JSON 형식으로 출력되는 함수 추가.
  std::string JSONStatement();

private:
  std::string customerName;
  std::vector< Rental > customerRentals;

  //[Jay] Add function that calculates amount.
  //double AmountCalc(Rental each);

};


inline Customer::Customer() {}
inline Customer::~Customer(void) {}

inline Customer::Customer( const std::string& name ): 
  customerName( name ) {}

inline void Customer::addRental( const Rental& arg ) { customerRentals.push_back( arg ); }

inline std::string Customer::getName() const { return customerName; }

#endif // CUSTOMER_HH

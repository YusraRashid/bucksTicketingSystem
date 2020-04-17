#ifndef UNTITLED_CUSTOMER_H
#define UNTITLED_CUSTOMER_H

#endif //UNTITLED_CUSTOMER_H

#include <iostream>
#include <iomanip>
#include <string>
#include "user.h"

using namespace std;

class customer : public user
{
public:
  void getPaymentInfo();

protected:
  string fName;
  string sName;
  string address;
};

void customer::getPaymentInfo()
{
  string cardNumber;

  std::cout << "\n---------- PLEASE ENTER YOUR PAYMENT DETAILS ----------\n"
            << std::endl;

  std::cin.clear();
  std::cin.ignore(100, '\n');
  std::cout << "\nPlease enter your card number: ";
  getline(cin, cardNumber);
  while (cardNumber.length() != 16)
  {
    std::cout << "Your card number should be 16 digits long." << std::endl;
    std::cout << "Please re-enter your card number: ";
    getline(cin, cardNumber);
  }

  std::cout << "\nThank you for your payment! ";
}
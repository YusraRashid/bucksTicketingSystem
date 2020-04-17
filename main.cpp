#include <iostream>
#include <string>
#include "ticket.h"
#include "show.h"
#include "customer.h"
#include "showSeat.h"

using namespace std;

int main()
{
  std::string a, b, c, f, g, h;
  int d;
  int e;
  double i;
  char ch,
      terminator;

  showSeat seat;
  customer customer;
  show show;
  ticket *tick;

  customer.getLogin();
  customer.getProfileInfo(f, g, h);

  std::cout << "\n---------- MAIN MENU ----------\n"
            << std::endl;
  std::cout << "1. Buy tickets for upcoming shows" << std::endl;
  std::cout << "2. Log out\n"
            << std::endl;
  std::cout << "Please enter a menu choice number: ";
  std::cin.get(ch);
  while (ch != '1' && ch != '2')
  {
    std::cin.clear();
    std::cin.ignore(100, '\n');
    std::cout << "Please select a valid menu choice number: ";
    std::cin.get(ch);
  }
  if (ch == '2')
  {
    cout << "Thank you for using the BCPA Ticketing System" << endl;

    return EXIT_SUCCESS;
  }
  do
  {
    show.selectShow(a, b);
    show.selectTime(c);
    do
    {
      std::cin.clear();
      std::cout << "\nAre you happy with your choice (Y = Yes, N = No)?: ";
      std::cin.get(ch);
    } while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n');
  } while (ch == 'N' || ch == 'n');

  d = seat.getNumSeats();
  e = seat.getSeatSelection();
  seat.calculatePrice(d);
  customer.getPaymentInfo();
}
#ifndef UNTITLED_TICKET_H
#define UNTITLED_TICKET_H

#endif //UNTITLED_TICKET_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class ticket
{
public:
  ticket();

  ~ticket();

  void setPrice(double price);

  void printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName,
                   string address);

  virtual double cost() = 0;

protected:
  double totalCost;
};

ticket::ticket()
{
  totalCost = 0;
}

void ticket::setPrice(double price)
{
  totalCost = price;
  std::cout << "\nThe total price of your tickets (including any applicable discount) is " << (char)156
            << this->cost() << ".\n"
            << std::endl;
  system("PAUSE");
}

void ticket::printTicket(string showName, string showDate, string showTime, int numSeats, string fName, string sName,
                         string address)
{
  std::cout << "\n---------- YOUR TICKETS ----------\n"
            << std::endl;
  std::cout << "\n--------------------\n"
            << std::endl;
  std::cout
      << "\n---------- Welcome to the Bucks Centre for the Performing Arts Ticket Purchasing System! ----------\n"
      << std::endl;
  std::cout << "\n---------- Enjoy the show ----------\n"
            << std::endl;
  std::cout << "Show: " << showName << std::endl;
  std::cout << "Date: " << showDate << std::endl;
  std::cout << "Time: " << showTime << std::endl;
  std::cout << "\n--------------------\n"
            << std::endl;
  std::cout << "Number of seats: " << numSeats << std::endl;
  std::cout << "Total cost: " << (char)156 << this->cost() << std::endl;
  std::cout << "Ticket purchaser: " << fName << " " << sName << std::endl;
  std::cout << "Postal address: " << address << std::endl;
  std::cout << "\n--------------------\n"
            << std::endl;
  std::cout << "\n--------------------\n"
            << std::endl;
}
#ifndef UNTITLED_SHOWSEAT_H
#define UNTITLED_SHOWSEAT_H

#endif //UNTITLED_SHOWSEAT_H

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

class showSeat
{
public:
  showSeat();
  ~showSeat();
  int getNumSeats();
  int getSeatSelection();
  char col;
  void calculatePrice(int rNum);

protected:
  char floorPlan[7][6];
  int numSeats;
  int rNum;
  float price;
};

showSeat::showSeat()
{
  for (int r = 0; r < 7; r++)
    for (int c = 0; c < 6; c++)
      floorPlan[r][c] = '0';
  numSeats = 0;
  rNum = 0;
  price = 1.99;
};

showSeat::~showSeat()
{
}

int showSeat::getNumSeats()
{
  std::cout << "\n---------- SELECT SEATS INTERACTIVELY ----------\n";
  do
  {
    std::cin.clear();
    std::cin.ignore(100, '\n');
    std::cout << "\nHow many tickets would you like to purchase (max. 8)?: ";
    std::cin >> numSeats;
  } while (numSeats != 1 && numSeats != 2 && numSeats != 3 && numSeats != 4 & numSeats != 5 &&
           numSeats != 6 & numSeats != 7 && numSeats != 8);
  return numSeats;
}

int showSeat::getSeatSelection()
{
  std::string rNumber;
  do
  {
    std::cout << "\nPlease select a row number (1 - 7): ";
    std::cin >> rNum;
    rNumber = std::to_string(rNum);
  } while (rNum < 1 && rNum > 7);
  do
  {
    std::cout << "Please select a column letter (A - F): ";
    std::cin.get(col);
  } while (col != 'A' && col != 'B' && col != 'C' && col != 'D' && col != 'E' && col != 'F');
  std::cout << "\nYou have selected seat: " + rNumber + col << std::endl;

  return rNum;
}

void showSeat::calculatePrice(int rNum)
{
  if (rNum > 0 && rNum <= 4)
  {
    price += 20;
  }
  else if (rNum >= 5)
  {
    price += 30;
  }

  price = (price >= 0.0) ? floorf(price + 0.5) : ceilf(price - 0.5);

  std::string nPrice;
  nPrice = std::to_string(price);
  std::cout << fixed << setprecision(2) << "\nYour tickets will cost £" << std::round(price) << ".\n";
}
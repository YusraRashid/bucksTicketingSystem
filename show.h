#ifndef UNTITLED_SHOW_H
#define UNTITLED_SHOW_H

#endif //UNTITLED_SHOW_H

#include <iostream>
#include <iomanip>
#include <string>

class show
{
public:
  show();
  ~show();
  void selectShow(string &showName, string &showDate);
  void selectTime(string &showTime);

protected:
  string showName;
  string showDate;
  string showTime;
};

show::show()
{
  showName = "";
  showDate = "";
  showTime = "";
}

show::~show() {}

void show::selectShow(string &showName, string &showDate)
{
  char ch;
  char terminator;
  std::cout << "\n---------- SELECT AN UPCOMING SHOW ----------\n"
            << std::endl;
  std::cout << "1. Star Wars: The Musical (20/05/2020)" << std::endl;
  std::cout << "2. Les Miserables (21/05/2020)" << std::endl;
  std::cout << "3. The Phantom of the Opera (22/05/2020)" << std::endl;

  std::cin.clear();
  std::cin.ignore(100, '\n');
  std::cout << "\nPlease select a show number: ";
  std::cin.get(ch);

  while (ch != '1' && ch != '2' && ch != '3')
  {
    std::cin.clear();
    std::cin.ignore(100, '\n');
    std::cout << "Please select a valid show number: ";
    std::cin.get(ch);
    std::cin.get(terminator);
  }
  switch (ch)
  {
  case '1':
    showName = "Star Wars: The Musical", showDate = "20/05/2020";
    break;
  case '2':
    showName = "Les Miserables", showDate = "21/05/2020";
    break;
  case '3':
    showName = "The Phantom of the Opera", showDate = "22/05/2020";
    break;
  }
  this->showName = showName;
  this->showDate = showDate;
}

void show::selectTime(string &showTime)
{
  char ch;

  std::cin.clear();
  std::cin.ignore(100, '\n');
  std::cout << "\n---------- SELECT A SHOWING -----------" << endl;
  std::cout << "1: 2pm" << endl;
  std::cout << "2: 5pm" << endl;
  std::cout << "\nPlease select a showing number: ";
  std::cin.get(ch);

  switch (ch)
  {
  case '1':
    showTime = "2pm";
    break;
  case '2':
    showTime = "5pm";
    break;
  }

  cout << "\n~~~~~~~~~~ You have selected " + showName + " on " + showDate + " at " + showTime + " ~~~~~~~~~~" << endl
       << endl;
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Enjoy the show! ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl
       << endl;
};
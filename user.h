#ifndef UNTITLED_USER_H
#define UNTITLED_USER_H

#endif //UNTITLED_USER_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class user
{
public:
  user();
  ~user();
  void getLogin();
  void getProfileInfo(string &fName, string &sName, string &address);

protected:
  string fName;
  string sName;
  string address;
};

user::user()
{
  fName = "";
  sName = "";
  address = "";
}

user::~user() {}

void user::getLogin()
{
  string username;
  string password;
  std::cout
      << "\n---------- Welcome to the Bucks Centre for the Performing Arts Ticket Purchasing System! ----------\n"
      << std::endl;
  std::cout << "          Please log in.          \n"
            << std::endl;
  std::cout << "Enter username: ";
  getline(cin, username);
  while (username.length() > 10)
  {
    std::cout << "Your username should be no more than 10 characters long." << std::endl;
    std::cout << "Please re-enter your usename: ";
    getline(cin, username);
  }
  std::cout << "Enter password: ";
  getline(cin, password);

  while (password.length() > 10)
  {
    std::cout << "Your password should be no more than 10 characters long." << std::endl;
    std::cout << "Please re-enter your password: ";
    getline(cin, password);
  }
}

void user::getProfileInfo(string &fName, string &sName, string &address)
{
  std::cout << "\n---------- CREATE USER ACCOUNT ----------" << std::endl;
  std::cout << "\n          You are a new user. Please enter your details to create a new account." << std::endl;
  std::cout << "\nPlease enter your first name: ";
  getline(cin, fName);
  std::cout << "Please enter your surname: ";
  getline(cin, sName);
  std::cout << "Please enter your address: ";
  getline(cin, address);
  std::cout << "\nHello " + fName + " " + sName + " from " + address + ".\n";
};
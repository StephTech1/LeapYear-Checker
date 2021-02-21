#include<iostream>
using namespace std;

int main() { 
  int year;


  cout <<"This program will check if a year is a leap year.\n";
  cout <<"Please enter a 4-digit year, e.g. 1999:\n";

  cin >>year;

  if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
    cout << year <<" is a leap year!";

  else if (year < 1752)
    cout << year <<" is not a leap year, because there were no leap years prior to 1752.";

  else
    cout << year <<" is not a leap year.";

return 0; 
}
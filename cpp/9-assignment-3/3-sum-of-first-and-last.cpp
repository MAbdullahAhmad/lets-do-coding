#include<iostream>
using namespace std;

int main(){
  int number, first;

  cout << "Enter Number: ";
  cin >> number;

  first = number % 10;
  while(number >= 10)
  number /= 10;
  cout << "Sum of First & Last: " << first + number << endl;

  return 0;
}
#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int number;

  cout << "Enter Number: ";
  cin >> number;
  cout << "Digits: " << static_cast<int>(log10(number))+1 << endl;

  return 0;
}
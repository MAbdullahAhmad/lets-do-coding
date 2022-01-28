#include<iostream>
using namespace std;

int main(){
  int number, digits=0;

  cout << "Enter Number: ";
  cin >> number;

  while(number>0){
    number /= 10;
    digits += 1;
  }
  cout << "Digits: " << digits << endl;

  return 0;
}
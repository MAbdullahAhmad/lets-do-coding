#include<iostream>
using namespace std;

int main(){
  float num;
  int count=0;

  cout << "Enter a Number: ";
  cin >> num;

  while((num*10 - (int)num*10) > 0){
    num *= 10;
  }

  while(num > 10){
    num /= 10;
    count ++;
  }
  count ++;

  cout << "Number of Digits: " << count << endl;
  return 0;
}
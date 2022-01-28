#include<iostream>
using namespace std;

int main(){
  float num;
  int int_num, count=0;

  cout << "Enter a Number: ";
  cin >> num;

  while((num*10 - (int)num*10) > 0){
    num *= 10;
  }
  int_num = num;

  while(int_num > 0){
    int_num /= 10;
    count ++;
  }

  cout << "Number of Digits: " << count << endl;
  return 0;
}
#include<iostream>
using namespace std;


/*
  limited functionality without a func
  (cannot use loop, cout, cin , etc.)
*/

int a = 3;
int b = 5;
int sum = a + b;
int i;

int main(){

  for(i=0; i<10; i++){
    sum += i;
  }

  cout << sum;
  return 0;
}
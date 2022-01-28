#include<iostream>
using namespace std;

int main(){
  int num=33;

  // if(num % 2 == 0){
  //   cout << "Even";
  // } else {
  //   cout << "Odd";
  // }

  string r = (num % 2 == 0) ? "Even" : "Odd";
  cout << r;

  cout << endl;

  /*
    condition ? first_exp : second_exp;
    if true, returns first_exp else return second_exp;
  */

  return 0;
}
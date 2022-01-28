#include<iostream>
using namespace std;

int main(){
  int addr = 0;
  short dts = 0;

  cout << "Address of 'addr' = " << &addr << endl;
  cout << "Address after adding (int) 1 = " << &addr + 1 << endl;
  cout << "Address after adding (int) 2 = " << &addr + 2 << endl;
  cout << "Address after adding (int) 0 = " << &addr + 0 << endl;
  cout << "Address after adding (bool) true = " << &addr + true << endl;
  cout << "Address after adding (bool) false = " << &addr + false << endl;
  cout << endl;
  cout << "Address of 'dts':" << &dts << endl;
  cout << "Address of 'dts' after adding (int) 1 = " << &dts + 1 << endl;
  return 0;
}
#include<iostream>
using namespace std;

int main(){
  int i, j;
  i = 2147480001;
  j = 2147480000;

  i = i + j;
  j = i - j;
  i = i - j;
  
  cout << i << endl;
  cout << j << endl;
  return 0;
}
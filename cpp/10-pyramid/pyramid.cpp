#include<iostream>
using namespace std;

int main(){
  int i, j;
  char ch;
  
  i=0;
  do{
    ch='A'+i;
    j=0;
    do {
      cout << ch;
      j++;
    } while(j<=i);
    cout << endl;
    i++;
  } while(i<4);
  return 0;
}
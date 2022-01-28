#include<iostream>
using namespace std;

int main(){
  int i, j;

  i=1;
  do{
    cout << i << endl;
    i++;
    j=1;
    do{
      cout << j << " ";
      j++;
    } while(j <= 3);
    cout << endl;
  } while(i <= 10);
}
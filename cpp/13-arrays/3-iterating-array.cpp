#include<iostream>
using namespace std;

int main(){
  int array[5];

  // Input
  for(int i=0; i<5; i++){
    cin >> array[i];
  }

  // Print
  cout << "Printing:" << endl;
  for(int i=0; i<5; i++){
    cout << array[i];
  }
  cout << endl;

  return 0;
}


#include<iostream>
using namespace std;

int main(){
  int myList[5] = {0, 4, 8, 12, 16};
  int yourList[5];
  int i;

  // yourList = myList; // Illegal

  // Copy
  for(i=0; i<5; i++){
    yourList[i] = myList[i];
  }

  // Output
  for(i=0; i<5; i++){
    cout << yourList[i] << " ";
  } cout << endl;
}


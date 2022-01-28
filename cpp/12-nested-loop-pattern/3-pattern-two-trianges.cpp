#include<iostream>
using namespace std;

int main(){
  // Top Section
  for(int x=5; x>=1; x--){ // Rows
    for(int y=1; y<=x; y++){ // Columns
      cout << ". ";
    }
    cout << endl;
  }

  // Bottom Section
  for(int x=1; x<=5; x++){ // Rows
    for(int y=1; y<=x; y++){ // Columns
      cout << ". ";
    }
    cout << endl;
  }
  return 0;
}
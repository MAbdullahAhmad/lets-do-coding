#include<iostream>
using namespace std;

int main(){
  for(int x=1; x<=5; x++){ // Rows
    for(int y=1; y<=x; y++){ // Columns
      cout << ". ";
    }
    cout << endl;
  }
  return 0;
}
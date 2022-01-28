#include<iostream>
using namespace std;

int main(){
  char ch;

  cout << "Enter a small alphabet : ";
  cin >> ch;

  for(; ch<='z'; ch++){
    cout << "Alphabet is = " << ch << endl;
  }

  return 0;
}
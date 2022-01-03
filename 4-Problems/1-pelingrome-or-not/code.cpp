#include<iostream>
using namespace std;

int main(){
  bool pelingrom = true; int half, i; string str;

  cout << "Enter String: "; cin >> str;
  for(i=0; i<(half = str.size() / 2); i++) if (
    str.at(str.size()-1 - i)
    != str.at(i)
  ) pelingrom = false;
  if(!pelingrom) cout << "Non-";
  cout << "Pelingrom" << endl;

  return 0;
}
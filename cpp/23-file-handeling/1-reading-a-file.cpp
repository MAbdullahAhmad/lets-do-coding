#include<iostream>
#include<fstream>
using namespace std;

int main(){
  string line;

  ifstream file;
  file.open("./titles.txt");

  while(file >> line){
    cout << line << endl;
  }
  cout << endl;

  return 0;
}
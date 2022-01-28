#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main(){
  string name = "John";

  // cout << strlen(name) << endl; // Error
  cout << strlen(name.c_str()) << endl; // Works
  return 0;
}


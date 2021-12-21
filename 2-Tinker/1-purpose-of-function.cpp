#include<iostream>
using namespace std;

void say_hello(){
  cout << "Hello" << endl;
  cout << "Lala" << endl;
}

int sum(int a, int b){
  int result;
  result = a + b;
  cout << "Hatt lellya" << endl;
  return result;
}

int main(){
  cout << "Hello World" << endl;

  say_hello();
  say_hello();
  say_hello();
  say_hello();

  int aa = 99;

  int a = sum(2, 4);
  int b = aa;

  cout << sum(a, b) << endl;
  cout << 55 << endl;
  cout << a << endl;

  return 0;
}

/*
  SYNTAX:

    <data-type> <name> (..<paremeters>){
      <statements>
      ....
      return <value>;
    }

  value <=> variable_name <=> function_call;
*/
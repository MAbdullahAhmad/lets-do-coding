#include<iostream>
using namespace std;

int main(){
  int array[5];

  cout << "Memory Location of array: " << &array << endl;  
  cout << "Memory Location of array[0]: " << &array[0] << endl;  
  cout << "Memory Location of array[1]: " << &array[1] << endl;  
  cout << "Memory Location of array[2]: " << &array[2] << endl;  
  cout << "Memory Location of array[3]: " << &array[3] << endl;  
  cout << "Memory Location of array[4]: " << &array[4] << endl;  
  
  return 0;
}
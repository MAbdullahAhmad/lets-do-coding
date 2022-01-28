#include<iostream>
#include <cstring> // use to use predefined functions
using namespace std;

int main(){
  char arr[10] = "John";

  for(int i=0; i<10; i++){
    cout << "Index-" << i << ": has character " << arr[i];
    if( arr[i] == '\0'){
      cout << " which is null (\\0)";
      break;
    }
    cout << endl;
  }

  // cstring function: strcpy
  char arr2[10];
  strcpy(arr2, arr); // Copy arr in arr2

  cout << "After Copy: ";
  cout << arr2 << endl;


  // cstring function: strcmp
  cout << "Compare: " << strcmp(arr, arr2) << endl;
  
  char arr3[10]= "Johny";
  cout << "Compare-2: " << strcmp(arr3, arr2) << endl;

  // cstring function: strlen
  cout << "Size of arr: " << strlen(arr) << endl;
  cout << "Size of arr2: " << strlen(arr2) << endl;
  cout << "Size of arr3: " << strlen(arr3) << endl;

  return 0;
}


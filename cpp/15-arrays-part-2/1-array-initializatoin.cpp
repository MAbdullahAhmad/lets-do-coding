#include<iostream>
using namespace std;

int main(){
  int i;

  // Specifying Size
  int num[5];
  // garbage values

  // Get size from Initialization
  int num2[] = {1, 2, 3, 4, 5};
  // size is 5 (because)
  // of 5 values

  // Partial Initialization
  int num3[10] = {5, 11};
  // num3 has size: 10
  // first 2 values are set

  /* Output */
  cout << "num: " << endl;
  for(i=0; i<5; i++){
    cout << num[i] << " ";
  } cout << endl;

  cout << "num2: " << endl;
  for(i=0; i<5; i++){
    cout << num2[i] << " ";
  } cout << endl;

  cout << "num3: " << endl;
  for(i=0; i<10; i++){
    cout << num3[i] << " ";
  } cout << endl;

  return 0;
}


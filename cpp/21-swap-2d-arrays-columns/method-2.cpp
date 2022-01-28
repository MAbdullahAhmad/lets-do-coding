#include<iostream>
using namespace std;

int main(){
  int arr[2][2] = {
    {5, 6},
    {9, 11}
  };

  int temp, i, j;

  // Output Before Swap
  cout << "Before Swap\n===========\n\n";
  for (i=0; i<2; i++){
    for (j=0; j<2; j++){
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }

  // Swap Method 2
  for (i=0; i<2; i++){
    temp = arr[i][0];
    arr[i][0] = arr[i][1];
    arr[i][1] = temp;
  }
  cout << endl << endl;

  // Output After Swap
  cout << "After Swap\n===========\n\n";
  for (i=0; i<2; i++){
    for (j=0; j<2; j++){
      cout << arr[i][j] << "\t";
    }
    cout << endl;
  }

  return 0;
}


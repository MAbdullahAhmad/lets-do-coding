#include <iostream>
using namespace std;

int main(){
  int n, i;
  long double factorial = 1.0;

  cout << "Enter a positive integer: ";
  cin >> n;
  
  for(i = 1; i <= n; ++i) {
      factorial *= i;
  }
  cout << "Factorial of " << n << " = " << factorial << endl;

  for(i = 2 ; i < n ; i++){
    if( n % i == 0){
      cout << "Non-";
      break;
    }
  }
  cout << "Prime  Number" << endl;
  return 0;
}
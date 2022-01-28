#include<iostream>
using namespace std;

int main(){
  int a=0, b=1, n;

  cout << "Enter End Limit (N): ";
  cin >> n;

  if(n<0){
    cout << "Invalid Limit!" << endl;
  } else {
    cout << a << " ";
    while(b <= n){
      cout << b << ' ';
      a = (b += a) - a;
    }
  }

  // if(n<0) cout << "Invalid Limit!" << endl;
  // else for((b=(a=0)+1) && cout << a << " "; b <= n; a = (b += a) - a) cout << b << " ";

  cout << endl;

  return 0;
}
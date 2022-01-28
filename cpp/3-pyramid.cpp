#include<iostream>
using namespace std;

int main(){
  int counter, limit, i;

  cout << "Enter End Limit: ";
  cin >> limit;

  for(counter=1; counter<=limit; counter++){

    // spaces
    for(i=limit - counter ; i>0 ; i--){
      cout << " ";
    }
    
    for(i=-counter; i<=counter; i++){
      if(i==1 || i == -1) continue;

      if (i<0)        cout << -i;
      else if (i > 0) cout << i;
      else            cout << 1;
    }

    // // iter => counter to 1
    // for(i=counter; i>=1; i--){
    //   cout << i;
    // }

    // // iter => 2 to counter
    // for(i=2; i<=counter; i++){
    //   cout << i;
    // }

    cout << endl; // New Line
  }

  return 0;
}

/*
   1
  212
 32123
4321234
*/
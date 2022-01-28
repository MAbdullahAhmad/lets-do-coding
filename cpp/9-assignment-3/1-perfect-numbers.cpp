#include<iostream>
using namespace std;

int main(){
  bool debug = true;
  int number, sum, iter;

  // Header
  cout << "Perfect Numbers between 1 and 200" << endl << endl;

  for(number=1; number<=200; number++){
    /*debug*/ if (debug) cout << "For " << number << ", Sum = 0";
    sum=0;
    for(iter=2; iter<=number; iter++){
      if(number%iter == 0){
        /*debug*/ if (debug) cout << " + " << iter;
        sum += iter;
      }
    }
    /*debug*/ if (debug) cout << " = " << sum;
    if(sum == number){
      /*debug*/ if (debug) cout << ". " << "Perfect: ";
      cout << number << endl;
    } /*debug*/ else if (debug) cout << ". " << "X." << endl;
  }

  return 0;
}



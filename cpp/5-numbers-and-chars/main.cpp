#include<iostream>
using namespace std;

int main(){
  for(int i=0; i<100; i++){
    cout << i+1;
    if((i+'a' >= 'a') && (i+'a' <= 'z')){
      cout << ' ' << static_cast <char> (i+'a');
    }
    cout << endl;
  }
}
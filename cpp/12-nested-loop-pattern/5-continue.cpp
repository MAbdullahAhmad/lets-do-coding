#include<iostream>
using namespace std;

int main(){
  for (int i=1; i<=10; i++){
    if(i == 6){
      continue;
      // skip for 6
    }
    cout << i << endl;
  }
  return 0;
}
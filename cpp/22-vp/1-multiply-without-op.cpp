#include <iostream>
using namespace std;

int main(){
  int num_1 = 0;
  int num_2 = 1;

  int limit = 50;
  int current;

  cout << num_1 << endl;
  cout << num_2 << endl;
  current = num_1 + num_2;

  while(current <= limit){
    current = num_1 + num_2;
    cout << current << endl;
    num_1 = num_2;
    num_2 = current;
  }

  return 0;
}
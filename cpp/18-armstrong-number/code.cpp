#include<iostream>
#include<math.h>
using namespace std;

int digits_in_num(int num){
  int count;
  for(count = 0; num > 0; num/=10)
    count++;

  return count;
}

int get_digit(int num, int index){
  return (num % (int)pow(10, index+1)) / pow(10, index);
}

int main(){
  int i, j, sum, num_len;

  // Header
  cout << "Program to find Armstrong Numbers from 1 to 1000" << endl;

  for (i=0; i<=1000; i++){
    sum = 0;
    num_len = digits_in_num(i);
    for(j=0; j<num_len; j++){
      sum += pow(get_digit(i, j), num_len);
    }
    if(sum == i) cout << sum << endl;
  }
  return 0;
}
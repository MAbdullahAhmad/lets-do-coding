#include<iostream>
using namespace std;

int main() {
        int num,factorial=1;

        cout<<" Enter Number To Find Its Factorial:  ";

        cin>>num;
        for (int a=1;a<=num;a++) {
                factorial=factorial*a;
        }

        cout<<"Factorial of Given Number is ="<<factorial<<endl;
  int n, i, m=0, flag=0;  

  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  m=n/2;  
  for(i = 2; i <= m; i++)  {  
      if(n % i == 0){  
          cout<<"Number is not Prime."<<endl;  
          flag=1;  
          break;  
} return 0;   "Number is Prime."<<endl;
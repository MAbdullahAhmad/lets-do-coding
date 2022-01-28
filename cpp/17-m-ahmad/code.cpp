#include<iostream>
using namespace std;
int main()
{
	int array[5], i,sum=0,product=0,avg;

		for (i = 0; i < 5; i++)
		{
			cin >> array[i];
		}
		for (i= 0; i < 5; i++)
		{
			cout << array[i];
		}
		for (i = 0; i < 5; i++)
		{
			sum = sum + array[i];
		}
		cout << "Sum is:" << sum << endl;

		for (i = 0; i < 5; i++)
		{
			product = product * array[i];
		}
		cout << "Product is:" << product << endl;
		for (i = 0; i < 5; i++)
		{
			avg = sum / 5;
		}
		cout << "Average is:" << avg << endl;

		return 0;
}


#include<iostream>
using namespace std;

int main()
{
	// 6. WAP to generate cube of given 5 numbers and make an array of that generated cubes.
	
	int a[10],b[10];
	cout << "enter any five number :" ;
	
	int i,j;
	
	for(j=0; j<5; j++)
	{
		cin >> a[j];
	}
	
	for(i=0; i<5; i++)
	{
	
		b[i] = a[i]*a[i]*a[i];
		
		cout << "cube of "<< a[i] << " is : " << b[i] << "\n";
	}
}

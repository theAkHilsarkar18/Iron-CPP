


// 1. WAP to swap elements of two integer arrays using user define function.

#include<iostream>
using namespace std;

int main()
{
	int len,i,j;
	cout << "enter lenght of array : ";
	cin >> len;
	
	int a[len],b[len],c[len];
	
	cout << "enter element of array 1 : " << "\n";
	for(i=0; i<len; i++)
	{
		cin >> a[i];
	}
	
	cout << "enter element of array 2 : " << "\n";
	for(i=0; i<len; i++)
	{
		cin >> b[i];
	}
	
	
    cout << "element of array 1 : \n";
    for(i=0; i<len; i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
		
		cout << a[i];
		cout << "\n";
	}
	
	cout << "element of array 2 : \n";
	for(i=0; i<len; i++)
	{
		a[i] = a[i] + b[i];
		b[i] = a[i] - b[i];
		a[i] = a[i] - b[i];
		
		cout << a[i];
		cout << "\n";
	}
    
}


#include<iostream>
using namespace std;

int main()
{
	// 5. WAP to find square root of given numbers from array elements.
	
	int a[100],len;
	cout << "enter length of array : ";
	cin >> len;
	
	int i,j,h,c=0;

	
	for(i=0; i<len; i++)
	{
		cin >> a[i];
		
		
	for(j=1; j<50; j++)
	{
		h = j*j;
		
		if(h==a[i])
		{
			c = 1;
			cout << "squareroot of " << a[i] << " is : " << j;
		}
	}
	
	if(c==0)
	{
		cout << a[i]<< " hasn't squareroot..";
	}
	
	cout << "\n";

		
	}
	










	
}

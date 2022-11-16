
#include<iostream>
using namespace std;

// 1. WAP to check given string is numeric or not.

main()
{
	char a[100];
	cout << "enter a string : ";
	cin >> a;
//	printf("%s",a);

// length of string
	
	int i,j,len=0,count;
	
	for(i=0; a[i]!='\0'; i++)
	{
		len ++;
	}
//	printf("length : %d",len);
	
	for(i=0; i<len; i++)
	{
		if(a[i]>=47 && a[i]<=57)
		{
			count = 1;
			break;
		}
		else
		{
			count = 0;
		}
	}
	
	if(count==0)
	{
		cout << "string is not numeric";
	}
	else
	{
		cout << "string is numeric";
	}

	
	
}

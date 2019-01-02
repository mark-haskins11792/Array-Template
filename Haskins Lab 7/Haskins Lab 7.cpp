// Description: Display 3 numbers that are each the sum of test1, test2, and test 3 array elements that are over the value of 10. 

#include "stdafx.h"
#include <iostream>
using namespace std;

template <typename T>                  
T sumSmall(T *a, int length)          
{
	T sum = 0;
	for (int i = 0; i < length; i++) 
	{
		if (a[i] < 10)
		{
			sum += a[i];
		}
	}
	return sum;                      
}

int main()
{
	int test1[] = { 1,2,3,4,5,6,7,8,12 };					
	int test1Length = sizeof(test1) / sizeof(test1[0]);     
	double test2[] = { 2.0,3.5,8.9,10.6,1.2 };				
	int test2Length = sizeof(test2) / sizeof(test2[0]);
	long test3[] = { 2512341L,237497L,2474984L,22847291L};  
	int test3Length = sizeof(test3) / sizeof(test3[0]);

	cout << sumSmall(test1, test1Length) << endl;
	cout << sumSmall(test2, test2Length) << endl;
	cout << sumSmall(test3, test3Length) << endl;
	
	return 0;
}


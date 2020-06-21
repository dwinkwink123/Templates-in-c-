#include<iostream>
using namespace std;

template<typename T>
T sumfunct(T a[],int n)
{
	int i;
	T s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	return s;
}

int main()
{
	int r1;
	int sum_int[]={4,5,6};
	r1=sumfunct(sum_int,3);
	cout<<r1<<'\n';
	
	
	float r2;
	float sum_float[]={4.5,5,6.5};
	r2=sumfunct(sum_float,3);
	cout<<r2;  
}

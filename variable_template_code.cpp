#include<iostream>
using namespace std;

template<class T>
T sumfunct(T a,T b)
{
	T c=a+b;
	return c;
}

int main()
{
	int sum_int;
	sum_int=sumfunct(10,20);
	cout<<sum_int;
	
	cout<<endl;
	
	float sum_float;
	sum_float=sumfunct(10.5,20.5);
	cout<<sum_float;	
	
}

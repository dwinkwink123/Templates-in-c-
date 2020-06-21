#include<iostream>
using namespace std;

int sumfunct(int a,int b)
{
	int c=a+b;
	return c;
}

int main()
{
	int sum_int;
	sum_int=sumfunct(10,20);
	cout<<sum_int;
}

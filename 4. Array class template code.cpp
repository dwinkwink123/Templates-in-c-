#include<iostream>
using namespace std;

template<typename T>
class test
{
	T *a;
	int n;
	public:
		void get();
		void put();
		test(int);
};

template<typename T>
void test<T>::get()
{
	for(int i=0;i<n;i++)
		cin>>a[i];
}

template<typename T>
void test<T>::put()
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<'\t';
}

template<typename T>
test<T>::test(int s)
{
	n=s;
	a=new int[n];
}

int main()
{
	test<int> x(3);
	x.get();
	x.put();
}

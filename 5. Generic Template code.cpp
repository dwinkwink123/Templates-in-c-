#include<iostream>
using namespace std;

template<typename T1,typename T2>
class test
{
	T1 a;
	T2 b; 
	public:
		void get();
		void put();
};

template<typename T1,typename T2>
void test<T1,T2>::get()
{	cin>>a>>b;  }

template<typename T1,typename T2>
void test<T1,T2>::put()
{	cout<<a<<'\t'<<b<<'\t';  }


int main()
{
	test<int,float> x;
	x.get();
	x.put();
}


#include<iostream>
using namespace std;

template<typename T>
class test
{
	T a;
	public:
		void get();
		void put();
	
};

template<typename T>
void test<T>::get()
{  cin>>a;   }

template<typename T>
void test<T>::put()
{  cout<<a;  }

int main()
{
	test<int> m;
	m.get();
	m.put();
}


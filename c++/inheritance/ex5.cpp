#include<iostream>
using namespace std;
class A
{
	private:
		int x;
};
class B:public A
{
	public:
		int y;
		void setdata()
		{
			x=10;
			y=20;
		}
		void print()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
};
int main()
{
	B obj;
	obj.setdata();
	obj.print();
}

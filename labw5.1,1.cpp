/*Write a Program to perform all basic arithmetic. operations such as +, -, *, and /
operations by implementing method overloading using 2 classes.
- use only one method named calculate() in the child class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition*/
#include<iostream>
using namespace std;

class test
{
	public:
	void base(int a,int b)
	{
		cout<<"division : "<<a/b<<endl;
	}
	void base(int c,int d,int e)
	{
		cout<<"subtraction:"<<c-d-e<<endl;
	}
	void base(int f,int g,int h,int i)
	{
		cout<<"multiplication:"<<f*g*h*i<<endl;
	}
	void base(int j,int k,int l,int m,int n)
	{
		cout<<"addition:"<<j+k+l+m+n<<endl;
	}
};
int main()
{
	test t1;
	t1.base(34,2);
	t1.base(34,23,13);
	t1.base(1,2,3,4);
	t1.base(4,5,6,7,8);

}
/*output:
division : 17
subtraction:-2
multiplication:24
addition:30
*/
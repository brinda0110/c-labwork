
#include<iostream>
using namespace std;
class X
{
    public:
	int a,b,c;
};

class Y : public X
{
	public:
		void setdata()
	{
	   cout<<"enter a:"<<endl;
	   cin>>a;
	   cout<<"enter b:"<<endl;
	   cin>>b;
	   cout<<"enter c:"<<endl;
	   cin>>c;
	}
	
	void getdata()
	{
		cout<<"enter a:"<<a
		    <<"enter b:"<<b
		    <<"enter c:"<<c<<endl;
		cout<<"cube of a:"<<a*a*a<<endl;
		cout<<"cube of b:"<<b*b*b<<endl;
		cout<<"cube of c:"<<c*c*c<<endl;
		cout<<"sum of cube's:"<<a*a*a+b*b*b+c*c*c<<endl;
		}	
};

int main()
{
	Y y1;
	y1.setdata();
	y1.getdata();
}

/*output:
enter a:
3
enter b:
4
enter c:
5
enter a:3enter b:4enter c:5
cube of a:27
cube of b:64
cube of c:125
sum of cube's:216
*/
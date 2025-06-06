/*Write a Program to convert a given degree Celsius temperature into Fahrenheit and
convert that Fahrenheit temperature into Kelvin by implementing multilevel
inheritance: Class P -> Class Q -> Class R
- Class P has the following members: temperature attribute in float
- Class Q has the following members: toFehrenheit() method
- Class R has the following members: toKelvin() method*/
#include<iostream>
using namespace std;



class P
{
	public:
		float celsius ;
		void setc()
		{
			cout<<"enter celsius:";
			cin>>celsius;
		}
};


class Q :public P
{
	public:
		float fehrenheit;
		
	void setf()
	{
		fehrenheit=(1.8*celsius)+32;
	}
};

class R :public Q
{
	public:
		float kelvin;
			
			void setk()
		  {
			kelvin = 273.5 + ((fehrenheit - 32) * (5.0/9.0));
	  	} 
	  
		void getdataA()
		{
			cout<<"enter celsius:"<<celsius<<endl
			     <<"enter fehrenheit:"<<fehrenheit<<endl
			     <<"enter kelvin:"<<kelvin<<endl;
				 }
		
	
	
		
};

int main()
{
	R r1;
	r1.setc();
	r1.setf();
	r1.setk();
	r1.getdataA();
}
/*output:
enter celsius:10
enter celsius:10
enter fehrenheit:50
enter kelvin:283.5
*/
#include<iostream>
#include<string.h>
using namespace std;
class workers
{
	public:
int	id;
char name[50];
int age;
char city[50];
char mobileno[50];
int validity; 
char brandname[50]; 
void setdata()
{
	
	cout<<"id:";
	cin>>id;
	cout<<"name:";
	cin>>name;
	cout<<"age:";
	cin>>age;
	cout<<"city:";
	cin>>city;
	cout<<"mobile no:";
	cin>>mobileno;
	cout<<"validity:";
	cin>>validity;
	cout<<"brand name:";
	cin>>brandname;
    printf("\n");
	}

void getdata()
{
	cout<<"id:"<<id<<endl
	<<"name:"<<name<<endl
	<<"age:"<<age<<endl
	<<"city:"<<city<<endl
	<<"mobile no:"<<mobileno<<endl
	<<"validity:"<<validity<<endl
	<<"brand name:"<<brandname<<endl;
	


}
};

int main()
{
	workers s1,s2,s3,s4,s5;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s4.setdata();
	s5.setdata();
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();

}
/*
id:1
name:jolly
age:23
city:surat
mobile no:1234567892
validity:3
brand name:jio

id:2
name:sweety
age:24
city:vadodra
mobile no:3456789987
validity:3
brand name:airtel

id:3
name:errica
age:24
city:surat
mobile no:987654329
validity:2
brand name:jio

id:4
name:sweeta
age:25
city:jamnagar
mobile no:9876545655
validity:1
brand name:vi

id:5
name:anita
age:24
city:surat
mobile no:987635425
validity:1
brand name:jio

id:1
name:jolly
age:23
city:surat
mobile no:1234567892
validity:3
brand name:jio

id:2
name:sweety
age:24
city:vadodra
mobile no:3456789987
validity:3
brand name:airtel

id:3
name:errica
age:24
city:surat
mobile no:987654329
validity:2
brand name:jio

id:4
name:sweeta
age:25
city:jamnagar
mobile no:9876545655
validity:1
brand name:vi
 
 id:5
name:anita
age:24
city:surat
mobile no:987635425
validity:1
brand name:jio
*/

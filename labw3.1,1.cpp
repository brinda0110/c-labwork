#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
int	id;
char name[50];
int age;
char course[50];
char city[50];
char email[50];
char college[50]; 

void setdata()
{
	
	cout<<"id:";
	cin>>id;
	cout<<"name:";
	cin>>name;
	cout<<"age:";
	cin>>age;
	cout<<"course:";
	cin>>course;
	cout<<"city:";
	cin>>city;
	cout<<"email:";
	cin>>email;
	cout<<"college:";
	cin>>college;
    printf("\n");
	}

void getdata()
{
	cout<<"id:"<<id<<endl
	<<"name:"<<name<<endl
	<<"age:"<<age<<endl
	<<"course:"<<course<<endl
	<<"city:"<<city<<endl
	<<"email:"<<email<<endl
	<<"college:"<<college<<endl;
	


}
};

int main()
{
	student s1,s2,s3,s4,s5;
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

/*output:
id:1
name:jolly
age:23
course:c
city:surat
email:jolly@gmail.com
college:sdjain

id:2
name:johny
age:23
course:c
city:johny@gmail.com
email:vadodra
college:sdjain

id:3
name:monty
age:24
course:c++
city:dwarka
email:monty@gmail.com
college:sdjain

id:4
name:jwala
age:24
course:c++
city:surat
email:jwala@gmail.com
college:ppsu

id:5
name:minu
age:25
course:java
city:vadodra
email:minu@gmail.com
college:ppsu

id:1
name:jolly
age:23
course:c
city:surat
email:jolly@gmail.com
college:sdjain

id:2
name:johny
age:23
course:c
city:johny@gmail.com
email:vadodra
college:sdjain

id:3
name:monty
age:24
course:c++
city:dwarka
email:monty@gmail.com
college:sdjain

id:4
name:jwala
age:24
course:c++
city:surat
email:jwala@gmail.com
college:ppsu

id:5
name:minu
age:25
course:java
city:vadodra
email:minu@gmail.com
college:ppsu
*/

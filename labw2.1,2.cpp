#include<iostream>
using namespace std;
class employee
{
	public:
int	id;
char companyname[50];
char color[50];
char model[50];
int releaseyear;

};

int main()
{
	
	int i;
	employee a[i];
	for(int i=0;i<4;i++)
	{
		printf("\n");
		cout<<"enter id:";
		cin>>a[i].id;
		
		cout<<"enter companyname:";
	    cin>>a[i].companyname;
	    
		cout<<"enter color:";
	    cin>>a[i].color;
	     
		cout<<"enter model:";
	    cin>>a[i].model;
		
		cout<<"enter releaseyear:";
	    cin>>a[i].releaseyear; 
		
	
	
	
	   
	    printf("\n");
 cout<<"enter id:"<<a[i].id<<"\nenter companyname:"<<a[i].companyname<<"\nenter color:"<<a[i].color<<"\nenter model:"<<a[i].model<<"\nenter releaseyear:"<<a[i].releaseyear<<endl;
	
}

}
/*output:
enter id:1
enter companyname:tata
enter color:black
enter model:mahindra
enter releaseyear:2007

enter id:1
enter companyname:tata
enter color:black
enter model:mahindra
enter releaseyear:2007

enter id:2
enter companyname:porter
enter color:blue
enter model:delivery
enter releaseyear:2022

enter id:2
enter companyname:porter
enter color:blue
enter model:delivery
enter releaseyear:2022

enter id:1
enter companyname:motorwala
enter color:violet
enter model:auro
enter releaseyear:2006

enter id:1
enter companyname:motorwala
enter color:violet
enter model:auro
enter releaseyear:2006
*/

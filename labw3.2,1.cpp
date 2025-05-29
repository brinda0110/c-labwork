#include<iostream>
using namespace std;
class hotels
{
public:
int id;
char name[50];
char hoteltype [50];
int rating ;
char location[50]; 
int establishyear;
int staffquantity;
int roomquantity;

void setdata()
{
	cout<<"enter id:";
	cin>>id;
	cout<<"name:";
	cin>>name;
	cout<<"hotel type:";
	cin>>hoteltype;
	cout<<"rating :";
	cin>>rating ;
	cout<<"location:";
	cin>>location;
	cout<<"establish year:";
	cin>>establishyear;
	cout<<"staff quantity:";
	cin>>staffquantity;
	cout<<"room quantity:";
	cin>>roomquantity;
	cout<<endl;
}
void getdata()
{
	cout<<"enter id:"<<id<<endl
	<<"name:"<<name<<endl
	<<"hotel type:"<<hoteltype<<endl
	<<"rating:"<<rating<<endl
	<<"location:"<<location<<endl
	<<"establish year:"<<establishyear<<endl
	<<"staff quantity:"<<staffquantity<<endl
	<<"room quantity:"<<roomquantity<<endl;
	
	
	}	
	

};
int main()
{   
    int j,n;
    cout<<"enter no of info of hotels:";
    cin>>n;
	hotels h[j];
	for(int i=1;i<=n;i++)
	{
        h[i].setdata();
        h[j].getdata();
			}
}
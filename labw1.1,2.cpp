#include <iostream>
using namespace std;

int main()
 {
 	int a,b,i;
 	cout<<"enter the first number:";
 	cin>>a;
 	cout<<"enter the second number:";
 	cin>>b;

    for(int i=a;i<=b;i++)
    {
    	cout<<i<<endl;
	}
	
	cout<<"leap year:";
	for(int i=a;i<=b;i++)
	{
		if(i%4==0)
		{
			cout<<i<<" ";
		}
	}
 }
 /*output:
 enter the first number:2020
enter the second number:2030
2020
2021
2022
2023
2024
2025
2026
2027
2028
2029
2030
leap year:2020 2024 2028
*/
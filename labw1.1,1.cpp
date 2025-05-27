#include <iostream>
using namespace std;

int main()
 {
    int i;

    cout <<"Enter array size: ";
    cin>>i;

    int arr[i];

    cout << "Enter the elements of the array:" << endl;
    for(int j=0;j<i;j++)
     {
        cin >> arr[j];
        }

    cout << "Even numbers in the array are: ";
   for(int j=0;j<i;j++)
    {
        if (arr[j] % 2 == 0)
		{
            cout << arr[j] << " ";
        }
        
    }
    cout << endl;

  
}
/*output:
Enter array size: 6
Enter the elements of the array:
1
2
3
4
5
6
Even numbers in the array are: 2 4 6
*/
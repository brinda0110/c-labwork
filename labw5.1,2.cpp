#include <iostream>
using namespace std;


class Cricket
 {
public:
    virtual void getovers() 
	{
        cout << "Total overs vary based on match type." << endl;
    }
};


class T20Match : public Cricket
 {
public:
    void getovers() 
	{
        cout << "Total overs in a T20 match: 20 overs per side." << endl;
    }
};


class TestMatch : public Cricket
 {
public:
    void getovers() 
	{
        cout << "Total overs in a Test match: Unlimited overs over 5 days." << endl;
    }
};


    int main() 
{
    Cricket* match;

    T20Match t20;
    TestMatch test;

    match = &t20;
    match->getovers();
 
    match = &test;
    match->getovers();  

}
/*output:
Total overs in a T20 match: 20 overs per side.
Total overs in a Test match: Unlimited overs over 5 days.
*/


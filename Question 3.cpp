/* Define a function to calculate x raised to the power y.  */

#include<iostream>
using namespace std;

int power(int &,int &);

int main()
{
    int x,y;

    cout<<"Enter Two Numbers->";
    cin>>x>>y;

    cout<<x<<" Power "<<y<<" is "<<power(x,y);
}

int power(int &a,int &b)
{
    int pow=1;

    for(int i=1;i<=b;i++)
    {
        pow*=a;
    }

    return pow;
}



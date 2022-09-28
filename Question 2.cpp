/* Define a function to find the highest value digit in a given number. */

#include<iostream>
using namespace std;

int highest_value(int );

int main()
{
    int a;

    cout<<"Enter a numbers->";
    cin>>a;

    cout<<"Highest value = "<<highest_value(a);
}

int highest_value(int a)
{
    int n,max=0;

    while(a)
    {
        n=a%10;

        if(n>max)
        max=n;
        a=a/10;
    }

    return max;
}

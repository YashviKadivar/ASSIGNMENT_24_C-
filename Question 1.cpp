/* Define a function to check whether a given number is a Prime number or not.  */

#include<iostream>
using namespace std;

int prime(int &);

int main()
{
    int n;

    cout<<"Enter a Number->";
    cin>>n;

    cout<<prime(n);
}

int prime(int &ref)
{
    for(int i=2;i<=ref/2;i++)
    {
        if(ref%i==0)
            return 1;
    }

    return 0;
}

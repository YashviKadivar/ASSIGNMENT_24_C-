/* Define a function to check whether a given number is a term in a Fibonacci series or
    not.    */

#include<iostream>
using namespace std;

int term_of_fibo(int &);

int main()
{
    int n;

    cout<<"Enter a Number->"<<endl;
    cin>>n;

    n=term_of_fibo(n);

    if(n==0)
        cout<<"Available";
    else
        cout<<"Not Available";
}

int term_of_fibo(int &n)
{
    int a,b,c;

    a=-1;
    b=+1;

    for(int i=1;i<n;i++)
    {
        c=a+b;

        if(c==n)
            return 0;

        a=b;
        b=c;
    }

    return 1;
}

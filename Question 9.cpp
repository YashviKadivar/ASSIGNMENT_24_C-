/* Write functions using function overloading to find a maximum of two numbers and
    both the numbers can be integer or real.    */

#include<iostream>
using namespace std;

int min(int,int);
float max(float,float);

int main()
{
    int a,b;

    cout<<"Enter a Number->";
    cin>>a>>b;

    cout<<"Minimum number "<<min(a,b)<<endl;
    cout<<"Maximum number "<<max(a,b)<<endl;
}

int min(int a,int b)
{
    if(a<b)
    return a;
    return b;
}

float max(float a,float b)
{
    if(a>b)
    return a;
    return b;
}

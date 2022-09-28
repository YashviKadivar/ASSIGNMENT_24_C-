/* Write functions using function overloading to add two numbers having different data
    types.  */

#include<iostream>
using namespace std;

int sum(int,int);
float sum(float,float);
int sum(int,int,int);

int main()
{
    int a,b,c;
    float d,e;

    cout<<"Enter 2 number->"<<endl;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;

    cout<<"Enter 2 float number->"<<endl;
    cin>>d>>e;
    cout<<sum(d,e)<<endl;

    cout<<"Enter 3 number->"<<endl;
    cin>>a>>b>>c;
    cout<<sum(a,b,c)<<endl;
}

int sum(int a,int b)
{
    return a+b;
}

float sum(float a,float b)
{
    return a+b;
}

int sum(int a,int b,int c)
{
    return a+b+c;
}

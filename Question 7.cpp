/* Write a function using the default argument that is able to add 2 or 3 numbers.  */

#include<iostream>
using namespace std;

int add(int a,int b,int c=0)
{
    return a+b+c;
}


int main()
{
   cout<<"Addition of 2 number is "<<add(5,2)<<endl;
   cout<<"Addition of 3 number is "<<add(10,23,3);

    return 0;
}


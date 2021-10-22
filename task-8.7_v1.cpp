#include<iostream>
using namespace std;

void swap(int,int);

int main()
{
        int a,b;
        cout<<"Enter Value Of a : ";
        cin>>a;
        cout<<"\nEnter Value of b : ";
        cin>>b;

        cout<<"\nBefore Swapping, Value of :\n\ta= "<<a<<"\tb = "<<b<<"\n";

        swap(a,b);

}

void swap(int a,int b)
{
        int c;
        c=a;
        a=b;
        b=c;
        cout<<"\n After Swapping, Value of : \n\ta = "<<a<<"\tb = "<<b<<"\n";

}

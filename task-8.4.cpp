#include<iostream>
using namespace std;

int fact(int);

int main()
{
int no,fac;
cout<<"Enter the no."<<endl;
cin>>no;
fac=fact(no);
cout<<"Factorial of "<<no<<" is "<<fac<<"\n";
return 0;

}
int fact(int no)
{
int i,f=1;
for(i=1;i<=no;i++)
f=f*i;
return(f);
}


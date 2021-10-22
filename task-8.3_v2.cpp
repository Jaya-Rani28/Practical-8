#include<iostream>
using namespace std;

int main()
{

int a = 10;

int *p;

int **q = &p;

p = &a;

**q = 30;

cout << *p <<"\n";

cout << **q <<"\n";

return 0;
}

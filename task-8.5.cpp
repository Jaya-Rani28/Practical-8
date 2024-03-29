// factorial of a number using recursion

#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;

    cout << "Enter a  number: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << factorial(n) <<"\n";

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}

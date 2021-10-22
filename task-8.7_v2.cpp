#include <iostream>
using namespace std;
 
void swapByReference(int &a, int &b){
    int temp= a;
    a=b;
    b=temp;
}
 
int main()
{
    int a,b;
    
    cout << "Enter a: "<<endl;
    cin >> a;
    cout <<"Enter b: "<< endl;
    cin >> b;
    
    cout << "Value of a before swapping: " << a <<endl;
    cout << "Value of b before swapping: " << b <<endl;
    
    swapByReference(a,b);
    
    cout << "Value of a after swapping: " << a <<endl;
    cout << "Value of b after swapping: " << b <<endl;
}

#include<iostream>
using namespace std;
 int arth(int *a,int *b)
 {
    cout<<"Addition of pointer:";
    cout<<*a+*b<<endl;
    cout<<"Subtraction of pointer";
    cout<<*a-*b<<endl;
    cout<<"Increment of pointer";
    cout<<++*a<<endl;
    cout<<"decrement of pointer";
    cout<<--*b<<endl;

 }
  
int main()
{
    int a,b;
    cout<<"Enter the number of A:";
    cin>>a;
    cout<<"Enter the number of b:";
    cin>>b;
    arth(&a,&b);
    return 0;
}
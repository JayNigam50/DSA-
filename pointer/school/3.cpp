#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main ()
{
     int a,b;
        cout<<"Enter the value of a and b:";
        cin>>a;
        cin>>b;
       swap(&a,&b);
       cout<<a<<endl<<b;
    return 0;
}

#include<iostream>
using namespace std;
int add(int *a, int *b)
{

    cout<< *a+*b<<endl;
}
int sub(int *a, int *b)
{
     int check= *a-*b;
    
    if(check < 0){
        check *= (-1);
        cout<<check;
    }
    else 
    cout<< check;
}
int main()
{
    int a, b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    add(&a,&b);
    sub(&a,&b);

    return 0;
}
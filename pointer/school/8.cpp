#include<iostream>
using namespace std;

int main()
{
    char c='A';
    char* C;
    C=&c;
    cout<<C<<endl;
    cout<<(void*)&c<<endl;
    cout<<c<<endl;
    return 0;
}
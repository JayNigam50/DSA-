#include<iostream>
using namespace std;
int main()
{
    int *a=nullptr;
    if(*a<=0)
    {
        cout<<"NULL pointer is found";
    }
    else
    {
    cout<<"NULL pointer is not found";
    }
    return 0;
}
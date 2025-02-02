#include<iostream>
using namespace std;

int main()
{
    int n;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    int* ptr;
    ptr = arr;
    for(int i= n; i>=0;i--)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}
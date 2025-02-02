#include<iostream>
using namespace std;
int main()
{
    int arr[10]= {1,2,3,4,5,6,7,8,9,0};
    int* ptr;
    ptr = arr;
    for(int i=0; i<=9;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}
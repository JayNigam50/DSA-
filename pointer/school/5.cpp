#include<iostream>
using namespace std;
void show(){
    int a=10;
    int *ptr=&a;
    cout<<ptr<<endl;
}
int main()
{
    show();
    return 0;
}

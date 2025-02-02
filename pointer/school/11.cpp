#include<iostream>
using namespace std;
void modi(int* a){
    *a=100;
    cout<<*a+2;
}
int main()
{
    int a = 7;
    modi(&a);
    return 0;
}
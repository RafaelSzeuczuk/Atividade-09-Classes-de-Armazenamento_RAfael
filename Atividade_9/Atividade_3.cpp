#include<iostream>
using namespace std;

int main(){
    const int i = 5;
    int *ptr, a=2;
    ptr=&a;
    *ptr-=i;
    cout<<a<<endl;
    return 0;
}
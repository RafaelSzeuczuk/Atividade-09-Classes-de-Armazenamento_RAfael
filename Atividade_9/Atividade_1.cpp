#include<iostream>
using namespace std;

int main(){
    int *ptr, a=8;
    ptr=&a;
    ptr++;
    cout<<*ptr<<endl;
    ptr--;
    cout<<*ptr<<endl;
    return 0;  
}
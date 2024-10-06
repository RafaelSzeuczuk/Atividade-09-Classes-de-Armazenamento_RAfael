#include<iostream>
using namespace std;

int main(){
    int a=4 , b=5, *ptr=&a, *ptr2=&b;
    cout<<*ptr+*ptr2<<endl;
    return 0;
}
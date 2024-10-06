#include<iostream>
using namespace std;

int main(){
    int a=4 , b=5, *ptr=&a, *ptr2=&b;
    ((*ptr)==(*ptr2))?cout<<"Igual"<<endl:cout<<"Diferente"<<endl;
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int vet[4]={1,2,3,4}, *ptr;
    ptr=vet;
    for(int i=0;i<4;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
    return 0;
}
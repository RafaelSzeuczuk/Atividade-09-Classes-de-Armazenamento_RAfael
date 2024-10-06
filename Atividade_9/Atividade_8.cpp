#include<iostream>
using namespace std;

void incremento(){
    register int num=0;
    num++;
    cout<<num<<endl;
}

int main(){
    for(int i=0;i<10;i++){
        incremento();
    }
    return 0;
}
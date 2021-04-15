#include<bits/stdc++.h>
using namespace std;

void sum(int a ,int b){
    if(a==10){
        return;
    }
    sum(a+1,b+1);
    cout<<a<<","<<b<<endl;
    cout<<a+b<<endl;
}

int main(){
    sum(1,1);
}
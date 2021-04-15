#include<bits/stdc++.h>
using namespace std;

int fob(int x){
    if(x<=1){
        return x;
    }
    return fob(x-1)+fob(x-2);
}

int main(){
    int n;
    cin>>n;
    cout<<fob(n-1)<<endl;
    return 0;
}
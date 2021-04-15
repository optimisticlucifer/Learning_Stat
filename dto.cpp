#include<bits/stdc++.h>
using namespace std;

int dto(int n){
    int sum=0,x=1;
    while(x<=n){
        x*=8;
    }
    x/=8;
    while(x>0){
        int q=n/x;
        n-=(q*x);
        sum=10*sum +q;
        x/=8;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<dto(n)<<endl;
}
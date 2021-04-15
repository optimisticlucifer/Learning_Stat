#include<bits/stdc++.h>
using namespace std;

int dtb(int n){
    int sum=0,x=1;
    while(x<=n){
        x*=2;
    }
    x/=2;
    while(x>0){
        int q=n/x;
        n-=(q*x);
        sum=10*sum +q;
        x/=2;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<dtb(n)<<endl;
}
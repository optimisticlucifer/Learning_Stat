#include<bits/stdc++.h>
using namespace std;

int dtb(int n){
    int x=1,sum=0,r=0;
    while(n!=1)
    {
        r=n%2;
        n/=2;
        sum+=(x*r);
        x*=10;
    }
    return sum+x;
}

int main()
{
    int n;
    cin>>n;
    cout<<dtb(n)<<endl;
}
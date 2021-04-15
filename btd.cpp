#include<bits/stdc++.h>
using namespace std;

int btd(int n){
    int x=1,sum=0;
    while(n>0){
        int a=n%10;
        sum+=a*x;
        x*=2;
        n/=10;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<btd(n)<<endl;
}
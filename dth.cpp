#include<bits/stdc++.h>
using namespace std;

string dth(int n){
    int x=1;
    string sum;
    while(x<=n){
        x*=16;
    }
    x/=16;
    while(x>0){
        int q=n/x;
        n-=(q*x);
        x/=16;
        if (q<=9){
            sum=sum+to_string(q);
        }
        else{
            char c='A'+ q-10;
            sum.push_back(c);
        }
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    cout<<dth(n)<<endl;
}
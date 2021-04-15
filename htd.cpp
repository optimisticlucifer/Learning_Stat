#include<bits/stdc++.h>
using namespace std;

int htd(string n){
    int x=1,sum=0;
    for(int i=(n.size())-1;i>=0;i--)
    {
        if(n[i]>='0'&&n[i]<='9')
        {
            sum+=(x*(n[i]-'0'));
        }
        else{
            sum+=(x*((n[i]-'A')+10));
        }
        x*=16;
    }
    return sum;
}

int main()
{
    string n;
    cin>>n;
    cout<<htd(n)<<endl;
}
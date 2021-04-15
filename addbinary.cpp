#include<bits/stdc++.h>
using namespace std;

int rev(int x)
{
    int ans=0;
    while(x>0){
        int last=x%10;
        ans=ans*10 + last;
        x/=10;
    }
    return ans;
}
int addb(int a,int b){
    int c=0,d=0,carry=0,sum=0;
    while(a!=0 && b!=0)
    {
        c=a%10;
        d=b%10;
        a/=10;
        b/=10;
        if(carry==0)
        {
            if(c==0 && d==0){
                sum=sum*10 + 0;
                carry=0;
            }
            if(c==1 && d==0){
                sum=sum*10 + 1;
                carry=0;
            }
            if(c==0 && d==1){
                sum=sum*10 + 1;
                carry=0;
            }
            if(c==1 && d==1){
                sum=sum*10 + 0;
                carry=1;
            }
        }
        if(carry==1)
        {
            if(c==0 && d==0){
                sum=sum*10 + 1;
                carry=0;
            }
            if(c==1 && d==0){
                sum=sum*10 + 0;
                carry=1;
            }
            if(c==0 && d==1){
                sum=sum*10 + 0;
                carry=1;
            }
            if(c==1 && d==1){
                sum=sum*10 + 1;
                carry=1;
            }
        }
    }
    return rev(sum);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<addb(a,b)<<"\n";
}


#include<bits/stdc++.h>
using namespace std;

int leftmax(int a[],int i,int n){
    int result=0;
    for(int j=0;j<=i;j++){
        result=max(result,a[j]);
    }
    return result;
}

int rightmax(int a[],int i,int n){
    int result=0;
    for(int j=n-1;j>=i;j--){
        result=max(result,a[j]);
    }
    return result;
}

int Nooftrappedwater(int a[],int n){
    int sum=0,lm,rm;
    for(int i=1;i<n-1;i++){
        lm=leftmax(a,i,n);
        rm=rightmax(a,i,n);
        sum=sum+(min(lm,rm)-a[i]);
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter the length of the walls"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<Nooftrappedwater(a,n)<<endl;

}
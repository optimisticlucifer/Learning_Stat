#include<bits/stdc++.h>
using namespace std;
int i;
void toh(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    toh(n-1,src,helper,dest);
    cout<<"move from "<<src<<"to"<<dest<<endl;
    toh(n-1,helper,dest,src);
    i++;

}

int main(){
    toh(6,'A','C','B');
    cout<<("steps are " + to_string(i));
}
#include<bits/stdc++.h>
using namespace std;

void change(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        change(s.substr(2));
    }
    else{
        cout<<s[0];
        change(s.substr(1));
    }
    
}

int main(){
    change("pippppiiiipi");
    cout<<endl;
} 
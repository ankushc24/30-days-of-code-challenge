#include<bits/stdc++.h>
using namespace std;
int main(){
    
    // write your code here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int x,y;
    cin>>x>>y;
    int a,b;
    if(x>=y){
        a=x;
        b=y;
    }
    else{
        a=y;
        b=x;
    }
    while(b!=0){
        a=a%b;
        if(b>a){
            swap(b,a);
        }
    }
    cout<<a<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
//totient function implementation to find all the numbers from 1 to n which have gcd with n equal to 1
int phi(int n){
   int ans=n;    
   int s=sqrt(n);
    for(int i=2;i<=s;i++){
        if(n%i==0){
            ans*=((i-1)/(double)i);
            while(n%i==0){
                n=n/i;
            }
        }
    }
    if(n>1){
        ans*=((n-1)/(double)n);
    }
    return ans;
}

int main(){
    
    // write your code here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ans=phi(n);
        cout<<ans<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int n){
    bool *prime=new bool[n+1];
    for(int i=0;i<=n;i++){
        prime[i]=true;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(prime[i]==true){
        for(int j=i*i;j<=n;j+=i){
            prime[j]=false;   
        }
        }
    }
    vector<int> v;
    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            v.push_back(i);
        }
    }
    return v;
}

int main(){
    
    // write your code here
    long long t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        vector <int> prime;  //stores all the prime numbers till n
        prime=sieve(n);
        long long s=prime.size();
        long long res=1;
        for(int j=0;j<s;j++){
            long long temp=n;
            long long k=1;
            long long count=0;
            long long save=n/pow(prime[j],k);
            while(save!=0){
                count+=(save);
                k++;
                save=n/pow(prime[j],k);  
            }
            res=res*(count+1)%(1000000007);  //pow returns in double so avoid using it as we can't do mod then 
        }
        cout<<res<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<int> sieve(int range,int b){
    bool *prime=new bool[b+1];
    for(int i=0;i<=b;i++){
        prime[i]=true;
    }
    for(int i=2;i<=range;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=b;j+=i){
                prime[j]=false;
            }
        }
    }
    vector<int> v;
    for(int i=2;i<=b;i++){
        if(prime[i]==true){
            v.push_back(i);
        }
    }
    return v;
}
int main(){
    
    // write your code here
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int a,b,n,x,p;
        int temp=0,count=0;
        cin>>a>>b>>n;
        int l=b-a+1;
        bool *arr=new bool[l];
        for(int i=a;i<=b;i++){
            arr[i-a]=true;
        }
        vector<int>ans;
        int range=sqrt(b);
        ans=sieve(range,b); 
        int s=ans.size();
        for(int i=a;i<=b;i++){
            temp=0;
            for(int j=0;j<s;j++){

                if(i%ans[j]==0){
                    temp++;
                }
            }
            if(temp==n){
                count++;
            }
        }
        cout<<count<<endl;

        }
        return 0;    
    }
    



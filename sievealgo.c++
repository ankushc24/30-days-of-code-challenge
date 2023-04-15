#include <bits/stdc++.h>
vector<int> primeNumbersTillN(int N) 
{ 
 	//This was the algo shown in the video i.e we check till sqrt(N) for every valye from 2 to N as there will be 
	//atleast 1 root from 2 to sqrt(N, else it will a prime number
/*	 int range;
	 vector<int>ans;
	 for(int i=2;i<=N;i++){
		 int count=0;
		 range=sqrt(i);
		 for(int j=2;j<=range;j++){
			 if(i%j==0){
				 count++;
			 }
		 }
		 if(count==0){
			 ans.push_back(i);
		 }
	 }
	 return ans;
*/
	//Applying sieve algo
	vector<int>ans;
	bool *prime=new bool[N+1];
    for (int i = 1; i <= N; i++) {
          prime[i] = true;
    }
    prime[1]=false;

	for(int i=2;i<=sqrt(N);i++){
        if(prime[i] == true) {
          for (int j = i * i; j <= N; j += i) {
            prime[j] = false;
          }
        }
    }
	for(int i=2;i<=N;i++){
		if(prime[i]==true){
			ans.push_back(i);
		}
	}
	return ans;
}

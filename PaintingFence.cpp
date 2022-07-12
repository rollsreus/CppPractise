#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	//fence-painting
	ll n,k;
	cin>>n>>k;
	vector<ll> dp(n+1,0);   //dp[i] no of ways of painting ending with different color on ith post.
	vector<ll> sp(n+1,0);    // sp[i] nowys endind with same color on ith post.
	dp[1]=k;
	sp[1]=0;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]*(k-1)+sp[i]*(k-1);
		sp[i]=dp[i-1];
	}
	cout<<dp[n]+sp[n];  //total ways of painting
	return 0;
}

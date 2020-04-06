#include "bits/stdc++.h"
using namespace std;

bool mycomp(pair<long long,long long> a , pair<long long,long long> b){
	
	if(a.second == b.second){
		
		return a.first > b.first;
	}
	return a.second > b.second;
}

int main(){
	
	int tc;
	cin >> tc;
	
	while(tc--){
		
		long long n;
		cin >> n;
		
		pair<long long,long long> p[n+1];
		for(long long i=1;i<=n;i++){
			
			cin >> p[i].first;
		}
		
		long long k,m;
		cin >> k >> m;
		
		for(long long i=1;i<=n;i++){
			
			
			p[i].second = p[i].first % k;
		}
		
		long long sum = 0;
		sort(p+1 , p+n+1 , mycomp);
		
		for(long long i=1;i<=m;i++){
			
			sum = sum + p[i].first;
		}
		cout << sum << endl;
	}
}

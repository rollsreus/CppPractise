#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v){
	for(auto i:v)
	cout<<i<<" ";
	cout<<endl;
}

void max_heap(vector<int> &v, int j){
	int n = v.size();
	int l = 2*j;
	int r = 2*j+1;
	int lar = j;
	if(l<n&&v[l]>v[j])
	  lar = l;
	if(r<n&&v[r]>v[lar])
	  lar =r;
	  
	if(lar!=j){
	  swap(v[j],v[lar]);
	  max_heap(v,lar);
	} 
}

void build_max_heap(vector<int> &v){
	int n =  v.size();
	for(int i=(n-1)/2;i>0;i--){
		cout<<v[i]<<": ";
	    max_heap(v,i);
	    print(v);}
	print(v);    
}


int main() {
	// your code goes here
	vector<int> v= {4,1,3,2,16,9,10,14,8,7};
	v.insert(v.begin(),0);
	print(v);
	build_max_heap(v);
	
	return 0;
}
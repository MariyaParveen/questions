#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	stack<int>st;
	vector<int>res;
	for(int i=0; i<=n-1; i++){
		while(!st.empty() && arr[i]>st.top()){
			st.pop();
		}
		if(st.empty()){
			res.push_back(-1);
		}
		else{
			res.push_back(st.top());
		}
		st.push(arr[i]);
	}
	for(int i=0; i<res.size(); i++){
		cout<<res[i]<<" ";
	}
}

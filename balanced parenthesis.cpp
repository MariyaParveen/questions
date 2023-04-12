#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s) {
        int n=s.length();
        stack<char>st;
        bool ans=true;
        for(int i=0; i<n; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                }
                else{
                    ans=false;
                }   
            }
             else if(s[i]=='}'){
                if(!st.empty() && st.top()=='{'){
                    st.pop();
                }
                else{
                    ans=false;
                }   
            }
             else if(s[i]==']'){
                if(!st.empty() && st.top()=='['){
                    st.pop();
                }
                else{
                    ans=false;
                }   
            }
        }
        if(!st.empty()){
            return false;
        }
        else{
            return ans;
        }
}
int main(){
	string str;
	cin>>str;
	if(isValid(str)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
}

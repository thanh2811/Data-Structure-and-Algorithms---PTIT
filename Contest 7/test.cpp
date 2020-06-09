#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
string s,s1,s2,str1,res;
void solve(){
    
    cin>>s;
    stack<string> str;
    stack<long long > val;
    long long i=0;
    while(i<s.length()){
        s1="";
        res="";
        if(isdigit(s[i])){
        	long long sum=0;
        	while(i<s.length() && isdigit(s[i])){
        		sum=sum*10+s[i]-'0';
        		i++;
			}
            val.push(sum);
            i--;
        }
        else if(s[i]=='['){
            str.push(string(1,s[i]));
        }
        else if(s[i]==']'){
        	
            while(!str.empty() && str.top()!="["){
                res=str.top()+res;
                str.pop();
            }
            long long t=0;
            if(!val.empty()){
            	t=val.top();
            	val.pop();
			}
			str.pop();
			s2="";
            for(long long j=0;j<t;++j){
            	s2+=res;
			}
			str.push(s2);
            
            
        }
        else{
        	
            while(s[i]!=']' && s[i]!='[' && !isdigit(s[i]) && i<s.length()){
                s1+=s[i];
                i++;
            }
            if(i<s.length()&&(s[i]==']' || s[i]=='[' || isdigit(s[i]))) i--;
            str.push(s1);
        }
        i++;
    }
    //cout << str.top()<<endl;
    str1="";
    while(!str.empty()){
        str1=str.top()+str1;
        str.pop();
    }
    cout << str1 <<endl;
    
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--) solve();
}
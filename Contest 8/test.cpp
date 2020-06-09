#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = (int) 205;
const int MOD = (int)1e9+7;
const bool MULTI_TEST = false;
using namespace std;

vector <pii> v;
string s;
vector <string> res;
int mark[205];

void recur(int cnt,int tmp,int start){
	if(tmp == cnt){
		string t = "";
		for(int i=0;i<s.size();i++){
			if(mark[i] == 0) 
				t.pb(s[i]);
		}
		res.pb(t);
		return;
	}
	for(int i=start;i<v.size();i++){
		mark[v[i].first] = 1;
		mark[v[i].second] = 1;
		recur(cnt,tmp+1,i+1);
		mark[v[i].first] = 0;
		mark[v[i].second] = 0;
	}
}

void solve(){
	cin >> s;
	stack <int> o;
	for(int i=0;i<s.size();i++){
		if(s[i] == '(') o.push(i);
		else if(s[i] ==')'){
			v.pb(pii(o.top(),i));
			o.pop();
		}
	}
	for(int i=1;i<=v.size();i++) recur(i,0,0);
	sort(all(res));
	for(int i=0;i<res.size();i++)
		cout << res[i] << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}


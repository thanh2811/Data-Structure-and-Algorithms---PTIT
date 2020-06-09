#include<bits/stdc++.h>
using namespace std;
int n , v , a[10001][10001];
void init(){
	cin >> n >> v;
	for(int i = 1 ; i <= n ; i++) for(int j = 1 ; j <= 1 ; j++) a[i][j] = 0;
	int x , y;
	for(int i = 1 ; i <= v ; i++){
		cin >> x >> y;
		a[x][y] = 1;
		a[y][x] = 1;
	}
}
void res(){
	for(int i = 1 ; i <= n ; i++){
		cout << i << ": ";
		for(int j = 1 ; j <= n ; j++){
			if(a[i][j] == 1) cout << j << " ";
		}
		cout << endl;
	}
}
int main(){
	int T;
	cin >> T;
	while(T--){
	   init();
	   res();
	}
}
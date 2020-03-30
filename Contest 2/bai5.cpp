#include <bits/stdc++.h>
using namespace std;

int n,k, a[20];
int stop=0;

void nhap(){
	cin>>n>>k;
	for(int i=1;i<=k;++i) a[i]=i;
} 
void output(){
	for(int i=1;i<=k;i++) cout<<a[i];
	cout<<" ";
}
void SinhTohop(){
	int i=k;
	while(a[i]==n-k+i && i>0){
		i--; 
	}
	if(i==0) stop=1;
	else{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
	} 
}

int main(){
	int x;
	cin>>x;
    while(x--){
    nhap();
    while(!stop){
    	output();
    	SinhTohop();
	} 
    stop=0;
	cout<<endl;
}

return 0;
}


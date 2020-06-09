#include <bits/stdc++.h>
using namespace std;

int a[100],n,stop=0;
void Nhap(){
	cin>>n;
	for(int i=1;i<=n;i++) a[i]=i;
} 
void Screen(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}
void SinhHoanVi(){
	int i=n-1;
	while(a[i]>a[i+1] && i>0) i--;
	if(i==0) stop=1;
	else{
		int j=n;
		while(a[j]<a[i]) j--;
		swap(a[i],a[j]);
        int d=i+1,c=n;
		while(d<c){
			swap(a[d],a[c]);
			d++;c--;
		}
	}

}

int main(){
	int x;
	cin>>x;
	while(x--){
    Nhap();
    while(!stop){
    	Screen();
    	SinhHoanVi();
	}
	cout<<endl;
	stop=0;
	}

return 0;
}


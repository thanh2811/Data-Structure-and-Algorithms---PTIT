#include<bits/stdc++.h>

using namespace std;
int chuaxet[10005];
bool check;

void DFS(vector<int> a[],int u,int x)
{
	chuaxet[u]=1;
	for(int i=0;i<a[u].size();i++)
	{
		int t1=a[u][i];
		if(t1!=x&&chuaxet[t1]==0) DFS(a,t1,u);
		else if(t1!=x&&chuaxet[t1]==1) check=true;
	}
	chuaxet[u]=2;
}
void res(vector<int> a[],int n)
{
	check=false;
	for(int i=1;i<=n;i++)
	{
		if(chuaxet[i]==0)
		{
			chuaxet[i]=1;
			DFS(a,i,0);
			if(check==true)
			{
				cout<<"NO";
				return;
			}
		
		}
		memset(chuaxet,0,sizeof(chuaxet));
	}
	cout<<"YES";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(chuaxet,0,sizeof(chuaxet));
		int n;
		cin>>n;
		vector<int> a[1005];
		for(int i=1;i<=n-1;i++)
		{
			int u,v;
			cin>>u>>v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		for(int i=1;i<=n;i++) sort(a[i].begin(),a[i].end());
		res(a,n);
		cout<<endl;
	}
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
		int n, m, x;
		cin>>n;
		vector<vector<int> > G(n);
		for(int i=1; i<n; i++){
			cin>>m;
			for(int j=0; j<m; j++){
				cin>>x;
				G[i].push_back(x);
			}
			sort(G[i].begin(), G[i].end());
		}
		bool visited[n+1];
		int path[n+1];
		for(int i=0; i<=n; i++){
			visited[i]=false;
			path[i]=0;
		}
		bool f=false;
		visited[1]=true;
		queue<int> bq;
		bq.push(1);
		while(bq.empty()==false){
			int u=bq.front();
			bq.pop();
			if(u==n){
				f=true;
				break;
			}
			for(int i=0; i<G[u].size(); i++){
				if(visited[G[u][i]]==false){
					visited[G[u][i]]=true;
					path[G[u][i]]=u;
					bq.push(G[u][i]);
				}
			}
		}
		if(f){
			x=path[n];
			vector<int> ans;
			while(x!=1){
				ans.push_back(x);
				x=path[x];
			}
			ans.push_back(1);
			cout<<ans.size()<<endl;
			for(int i=ans.size()-1; i>=0; i--){
				cout<<ans[i]<<" ";
			}
		}
		else
			cout<<-1;
        cout<<endl;
	}

	return 0;
}

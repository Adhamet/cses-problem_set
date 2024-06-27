#include <bits/stdc++.h>
using namespace std;

#define adhamet ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pi pair<int, int>
#define pll pair<ll,ll>
#define F first
#define S second
#define el '\n'
#define dbg(v) cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

const int N = 2e5+5;
bool vis[N]{0};
vector<vi> adjL;
void dfs(int node) {
	if(vis[node]) return;
	vis[node] = true;
	for(auto child: adjL[node])
		dfs(child);
}

int main()	{
	adhamet;

	int n,m;	cin >> n >> m;
	adjL.resize(n+1);
	for(int i = 0; i < m; i++) {
		int u,v;	cin >> u >> v;
		adjL[u].push_back(v);
		adjL[v].push_back(u);
	}

	int components=0;
	vi toConnect;
	for(int i = 1; i <= n; i++) {
		if(!vis[i]) {
			components++;
			toConnect.push_back(i);
			dfs(i);
		}
	}

	cout << components-1 << el;
	if(components!=1) for(int i = 0; i < toConnect.size()-1; i++) {
		cout << toConnect[i] << " " << toConnect[i+1] << el;
	}
	
	return 0;
}

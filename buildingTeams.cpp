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
bool denied = false;
int color[N];
vector<vi> adjL;
void dfs(int node, int c) {
	if(color[node]!=-1) return;
	color[node] = c;
	for(auto child: adjL[node]) {
		if(color[child] == c) { denied = true; return; }
		dfs(child, 1-c);
	}
}

int main()	{
	adhamet;

	int n,m;	cin >> n >> m;
	adjL.resize(n+1);
	fill(color, color + n + 1, -1);
	for(int i = 0; i < m; i++) {
		int u,v;	cin >> u >> v;
		adjL[u].push_back(v);
		adjL[v].push_back(u);
	}

	for(int i = 1; i <= n; i++) {
		if(color[i] == -1) dfs(i,0);
		if(denied) break;
	}

	if(denied) cout << "IMPOSSIBLE" << el;
	else for(int i = 1; i<=n; i++) cout << color[i]+1 << " ";
	
	return 0;
}


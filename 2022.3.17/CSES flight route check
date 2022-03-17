#include <iostream> // see C++ Tips & Tricks
#include <cstring>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair


vi adj[100005][2]; bool vis[100005];

void dfs(int v, int x) {
	vis[v] = true;
	for (int to : adj[v][x]) {
		if (!vis[to]) {
			dfs(to, x   );
		}
	}
}

int main() {

	int n, m; cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v; cin >> u >> v;
		u--, v--;
		adj[u][0].pb(v);
		adj[v][1].pb(u);
	}
	dfs(0, 0);
	for (int i = 0; i < n; i++) {
		if (!vis[i]) {
			cout << "NO" << '\n';
			cout << 1 << " " << i + 1 << '\n';
			return 0;
		}
	}
	memset(vis, false, sizeof(vis)); //fill vis with false
	dfs(0, 1);
	for (int i = 0; i < n; i++) {
		if (!vis[i]) {
			cout << "NO" << '\n';
			cout << i + 1 << " " << 1 << '\n';
			return 0;
		}
	}
	cout << "YES" << '\n';
}

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

ll pow10(int exp) {
	ll product = 1;
	for (int i = 0; i < exp; i++) { product *= 10; }
	return product;
}

int main()	{
	adhamet;
	int q; cin >> q;

	for(int i = 0; i < q; i++) {
		ll k;	cin >> k;
		int n = 1;
		while(k > n * 9 * pow10(n-1)) {
			k -= n * 9 * pow10(n-1);
			n++;
		}

		ll num = (k - 1) / n + pow10(n-1);
		int loc = (int)((k - 1) % n);
		cout << to_string(num)[loc] << el;
	}
	
	return 0;
}


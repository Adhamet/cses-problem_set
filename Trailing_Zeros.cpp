#include <iostream>
using namespace std;

#define adhamet ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using ll = long long;
using ld = long double;
using ld = long double;
using pi = pair<int,int>;
using pll = pair<ll,ll>;
using pd = pair<ld,ld>;
#define el '\n'
#define dbg(v)                                                                 \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main()
{
    adhamet;
    // freopen("file.in", "r", stdin);
    // freopen("file.out", "w", stdout);
	
	int n;
	cin >> n;
	ll trailing_zeroes=0;

	for(ll i = 5; (n/i) >= 1; i*=5)
		trailing_zeroes += (n/i);
	cout << trailing_zeroes;

    return 0;
}

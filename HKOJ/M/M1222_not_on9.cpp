#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define F0R(i, a) for (ll i=0; i<(a); i++)

int find_lis(vector<ll> a) {
	vector<ll> greed;
	for (ll i : a) {
		ll pos = lower_bound(greed.begin(), greed.end(), i) - greed.begin();
		if (pos == greed.size())
			greed.push_back(i);
		else
			greed[pos] = i;
	}
	return greed.size();
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    ll n; cin >> n; vector<long long> v(n);
    F0R(i, n) {
        cin >> v[i];
    }
    cout << find_lis(v) << endl;
    return 0;
}
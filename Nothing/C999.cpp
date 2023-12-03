/** author : akira **/
#include "bits/stdc++.h"
using namespace std;

#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define int long long
#define fi first
#define se second

const int MOD = 1e9 + 7;
vector<pair<int, int>> pos;
vector<int> num;
vector<char> sign;
string s, ans;
void math(int l, int r) {
    int tmp = 0, ss = 0, left, right;
    for(int i = 0; i < sz(num); i++) {
        if(sign[i] != NULL && sign[i] == '*') {
            tmp += num[i] * num[i + 1];
            num[i + 1] = tmp;
        }
    }

}
void up(int l, int r) {
    for(int i = l + 1; i < r; i++) {
        if(s[i] >= '0' && s[i] <= '9') num.emplace_back(s[i] - '0');
        else sign.emplace_back(s[i]);
    }
    math(l, r);
}
void again() {
	pos.clear();
	for(int i = 0; i < sz(s); ++i) {
		if(s[i] == '(') {
			int tight = 0;
			for(int j = i + 1; j < sz(s); ++j) {
				if(s[j] == '(') ++tight;
				else if(s[j] == ')') {
					if(tight == 0) {
						pos.emplace_back(i, j);
						break;
					}
					--tight;
					if(tight == -1) {
						pos.emplace_back(i, j);
						break;
					}
				}
			}
		}
	}
	reverse(all(pos));
}
signed main() {
	fastIO
	cin >> s;
	again();
	for(int i = 0; i < sz(pos); i++) {
        up(pos[i].fi, pos[i].se);
	}
    cout << s;
}

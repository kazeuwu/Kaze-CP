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
vector<pair<int, bool>> num;
vector<int> support;
vector<pair<char, int>> ope;
string s;
int cnt = 0;
void math(int l, int r) {
	int tmp = 1, count = 0;
	for(int i = 0; i < sz(ope); ++i) {
		if(ope[i].fi == '*') {
			++count;
			support.emplace_back(ope[i].se);
	  	}
	} // 5*5*5 -> 25*5
	for(int i = 0; i < count; ++i) {
		tmp *= (num[i].fi * num[i + 1].fi);
		num[i + 1].fi = tmp;
		
		//num[i] = num[i + 1] = -1;
		num[i].se = num[i + 1].se = true;
	}
	string done = to_string(tmp);
	for(int i = 0; i < sz(num); ++i) {
		if(num[i].se == false) {
			done += '+' + to_string(num[i].fi); // 4+2
		}
	}
	cout << "ban dau" << s << '\n';
	s.erase(l, r - l + 1);
	cout << "xoa" << s << '\n';
	s.insert(l, done);
	cout << "sau khi xoa" << s << '\n';
//	support.clear();
//	num.clear();
	//ope.clear();
	pos.erase(pos.begin());
}                                 
// (1 * 4 + 2) // num = {1, 4, 2} // ope = {*, +}
void up(int l, int r) {
	for(int i = l; i < r; ++i) {
		if(s[i] >= '0' && s[i] <= '9') {
			num.emplace_back(s[i] - '0', false);
		}
		else {
			if(s[i] == '*' || s[i] == '+') ope.emplace_back(s[i], i - 1);
		}
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
	reverse(all(pos));
	while(sz(pos) != 0) {
		up(pos[0].fi, pos[0].se);
		again();
	}
	 
	cout << s;
}
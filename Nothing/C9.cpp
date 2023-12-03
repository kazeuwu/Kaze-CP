// author : akira
#include <bits/stdc++.h>
using namespace std;

#define akira ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define endl '\n'
#define pb push_back
#define pf push_front
#define cint(x) int(x - '0')
#define fi first
#define se second
#define llll pair<long long, long long>
#define pii pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double
string s;
int cnt = 0, upd = 0;
vector<pair<int, int>> pos;
bool check(char x) {
	if(x >= '0' && x <= '9') return true;
	return false;
}
int symbol(char x) {
	if(x == '+') return 1;
	if(x == '-') return 2;
	if(x == '*') return 3;
	if(x == '/') return 4;
}
void again() {
	pos.clear();  
	cnt = 0;
	int ans = 0;
	for(int i = 0; i < sz(s); i++) {
		if(s[i] == '(') {
			++cnt;
			int pre = 0;
			for(int j = i + 1; j < sz(s); j++) {
				if(s[j] == '(') ++pre;
				else if(s[j] == ')') {
					if(pre == 0) {
						pos.pb({j, i});
							break;
					}
					--pre;
					if(pre == -1) {
						pos.pb({j, i});
						break;
					}
				}
			}
		}
	}
	sort(all(pos));
	upd = cnt;
}
void update(int l, int r) {
	vector<int> num;
	int tmp = 0, ok = 0, tmp2 = 0; // 1+(1+(2+2)+(3+3))
	for(int i = l + 1; i < r; i++) {
		if(check(s[i])) {
			num.pb(s[i] - '0');
		}
		else {
			ok = symbol(s[i]);
		}
	} 
	if(ok == 1) tmp += (num[0] + num[1]);
	else if(ok == 2) tmp += (num[0] - num[1]);
	else if(ok == 3) tmp += (num[0] * num[1]);
	else if(ok == 4) tmp += (num[0] / num[1]);
	s.erase(l, 5);
	string word = to_string(tmp);
	s.insert(l, word);
}
int main() {
	akira
	cin >> s;
	again();
	for(int i = 0; i < sz(pos); i++) {
		update(pos[i].se, pos[i].fi);
		again();
		//cout << pos[i].fi << " " << pos[i].se << '\n';
	}
	for(int i = 0; i < sz(s); i++) {
		if(s[i] == '(' || s[i] == ')') s.erase(i, 1);
	}
	int ans = 0;
	for(int i = 0; i < sz(s); i++) {
		if(check(s[i])) {
			ans += s[i] - '0';
		}
	}
	cout << s;
	return 0;
}
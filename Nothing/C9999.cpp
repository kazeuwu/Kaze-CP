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
string s, ans;
vector<int> num;
vector<pair<int, int>> pos;
vector<string> temp;
vector<char> sign;
void range() { // ((1+1)(2+2))
    for(int i = 0; i < sz(s); i++) {
       if(s[i] != '(') continue;
       int tight = 0;
        for(int j = i + 1; j < sz(s); j++) {
            if(s[j] == '(') {
                ++tight;
            }
            else if(s[j] == ')') {
                --tight;
            }
            if(tight == -1) pos.emplace_back(j, i);

        }
    }
}
void math(int l, int r) {                // 0->2 ; 2->4 ; 4->6 => (i * 2)
    num.clear(); // (3+2*3+1) // 3 2 3 1 // + * +
    sign.clear(); // 6
    vector<int> tmp;
    string tmpword;
    for (int i = l; i <= r; i++) {
        tmpword += s[i];
    }
    for (int i = l; i < r; i++) {
        if(tmpword[i] >= '0' && tmpword[i] <= '9') num.emplace_back(tmpword[i] - '0');
        else if(tmpword[i] == '+' || tmpword[i] == '*') sign.emplace_back(tmpword[i]);
    }
    for (int i = 0; i < sz(sign); i++) {
        if(sign[i] == '*') {
            tmp.emplace_back(num[i] * num[i + 1]);
            int x = i * 2, y = x + 2;
            tmpword.erase(x, y - x + 1);
        }
    }
    cout << tmpword;
}
signed main() {
	fastIO
	cin >> s;
    range();
    for (int i = 0; i < sz(pos); i++) {
        math(pos[i].fi, pos[i].se);
    }
}
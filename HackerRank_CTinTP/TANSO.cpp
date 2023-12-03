// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

/** ----------MACROS---------- **/
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define p64 pair<long long, long long>
#define p32 pair<int, int>
#define ll long long
#define ull unsigned long long
#define ldb long double

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
                         
/** ----------PROBLEM SOLVING---------- **/
int cnt[27];
void count(string s) {
	for(int i = 0; i < sz(s); i++) {
    	++cnt[s[i] - 'a'];
    }
}
void solve() {
    int t; cin >> t;
    cin.ignore();
    while(t--) {
    	//cin.ignore();
    	string s; getline(cin, s);
    	stringstream ss(s);
    	string tmp;
        string word;
    	while(ss >> tmp) {
    	    word += tmp;
    	}
    	for(int i = 0; i < sz(word); i++) {
    		word[i] = tolower(word[i]);
    	}
    	count(word);
    }
    int pre = INT_MIN;
    for(int i = 0; i < 27; i++) {
    	if(cnt[i] > pre) pre = cnt[i];
    }
    cout << pre;
}

/** ----------ALGORITHMS----------

    ------------------------------ **/

/** ----------MAIN FUNCTION---------- **/
int main() {
	fastIO
	int t = 1; //cin >> t;
	while(t--) solve();
	return 0;
}
// author : Tran Gia Huy
#include "bits/stdc++.h"
using namespace std;

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
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)

const ldb PI = 3.1415926535897932384626433832795028841971693993751058209749445923;
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll MOD2 = 1e9 + 9;
const ldb EPS = 1e-6;
#define int double
void solve() {
    for(int i = 0; i < 4; i++) {
    	int sum1 = 0;
    	if(i == 0) sum1 = 7 + 8;
    	if(i == 1) sum1 = 7 - 8;
    	if(i == 2) sum1 = 7 * 8;
    	if(i == 3) sum1 = 7 / 8;
    	for(int ii = 0; ii < 4; ii++) {
    		int sum2 = 0;
    		if(ii == 0) sum2 = 6 + sum1;
    		if(ii == 1) sum2 = 6 - sum1;
    		if(ii == 2) sum2 = 6 * sum1;
    		if(ii == 3) sum2 = 6 / sum1;
    		for(int iii = 0; iii < 4; iii++) {
    			int sum3 = 0;
    			if(iii == 0) sum3 = 5 + sum2;
    			if(iii == 1) sum3 = 5 - sum2;
    			if(iii == 2) sum3 = 5 * sum2;
    			if(iii == 3) sum3 = 5 / sum2;
    			for(int iv = 0; iv < 4; iv++) {
	    			int sum4 = 0;
	    			if(iv == 0) sum4 = 4 + sum3;
	    			if(iv == 1) sum4 = 4 - sum3;
	    			if(iv == 2) sum4 = 4 * sum3;
	    			if(iv == 3) sum4 = 4 / sum3;
		    		for(int vi = 0; vi < 4; vi++) {
		    			int sum5 = 0;
		    			if(vi == 0) sum5 = 3 + sum4;
		    			if(vi == 1) sum5 = 3 - sum4;
		    			if(vi == 2) sum5 = 3 * sum4;
		    			if(vi == 3) sum5 = 3 / sum4;
		    			for(int vii = 0; vii < 4; vii++) {
			    			int sum6 = 0;
			    			if(vii == 0) sum6 = 2 + sum5;
			    			if(vii == 1) sum6 = 2 - sum5;
			    			if(vii == 2) sum6 = 2 * sum5;
			    			if(vii == 3) sum6 = 2 / sum5;
			    			for(int viii = 0; viii < 4; viii++) {
				    			int sum7 = 0;
				    			if(viii == 0) sum7 = 1 + sum6;
				    			if(viii == 1) sum7 = 1 - sum6;
				    			if(viii == 2) sum7 = 1 * sum6;
				    			if(viii == 3) sum7 = 1 / sum6;
				    			if(sum7 == 26) {
				    			    //cout << i << " " << ii << " " << iii << " " << iv << " " << vi << " " << vii << " " << viii << '\n';
				    			    vector<char> ch;
				    			    ch.pb(viii), ch.pb(vii), ch.pb(vi), ch.pb(iv), ch.pb(iii), ch.pb(ii), ch.pb(i);
				    			    for(int i = 0; i < sz(ch); i++) {
				    			        if(ch[i] == 0) cout << '+';
				    			        if(ch[i] == 1) cout << '-';
				    			        if(ch[i] == 2) cout << '*';
				    			        if(ch[i] == 3) cout << '/';
				    			        cout << " ";
				    			    }
				    			    cout << '\n';
				    			}
				    		}
			    		}
		    		}
	    		}
    		}
    	}
    }
}

signed main() {
	solve();
	//return 0;
}
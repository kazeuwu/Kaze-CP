#include <iostream>
#include <math.h>
using namespace std;

#define int long long
int myCountX(int N, int X) {
    int x, a, r;
    int e;

    e = (int)(log10(N));
    r = 0;
    while (e >= 0) {
        x = N / (int)pow(10, e);
        x %= 10;
        a = x * e * (int)pow(10, e - 1);
        r += a;
        if (x == X) {
            a = (N % (int)pow(10, e)) + 1;
            if (X == 0)
                a -= (int)pow(10, e);
            r += a;
        }
        if (x > X && X != 0) {
            a = (int)pow(10, e);
            r += a;
        }
        e--;
    }
    return r;
}
 
signed main() {
	int t; cin >> t;
	while(t--) {
		int l, r, x; cin >> l >> r >> x;
 		cout << myCountX(r, x) - myCountX(l - 1, x) << '\n';
	}
}
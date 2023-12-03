/**
 *    author:  akira
 *    created: 28/05/2023 22:58:25
**/
#include <bits/stdc++.h>
typedef long long ll;
typedef long double ldb;
typedef unsigned long long ull;
using namespace std;

const ldb PI = 3.14159265358979323846264338327950288419716939937510582097494459230;
const ll INF = 1000000000000000000;
const ll MOD = 1000000007;
const ll MOD2 = 1000000009;
const ldb EPS = 1e-6;
double gcd(double a, double b) {
	if(a < b) return gcd(b, a);
	if(fabs(b) < 0.001) return a;
	return (gcd(b, a - floor(a / b) * b));
}
void solve() {
    double x1, y1, x2, y2, x3, y3; cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	double a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	double b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	double c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	double p = (a + b + c) / 2.0;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	double r = (a * b * c) / (4 * s);
	double A = acos((b*b + c*c - a*a) / (2*b*c));
	double B = acos((a*a + c*c - b*b) / (2*c*a));
	double C = acos((b*b + a*a - c*c) / (2*a*b));
	double n = PI / gcd(gcd(A, B), C);
	double res = (n * r * r * sin((2 * PI) / n))/2;
	//double res = n * 0.5 * r * r * sin((2 * PI) / n);
	cout << setprecision(6) << fixed << res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
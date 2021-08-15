#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>

using namespace std;

#define FOR(i, n) for (int i = 0; i < n; ++i)
#define EACH(e, a) for (const auto &e: a)
#define DEB(v) write("[ DEBUG ] ", #v, " | ", v, "\n")
#define mp make_pair
#define pb push_back
#define PI 3.14159265358979323846

typedef long long ll;
typedef long double ld;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef set<int> si;
typedef set<string> ss;
typedef pair<int, int> pii;

template<typename T> void read(T &x) {
	cin >> x;
}
template<typename F, typename... R> void read(F &f, R &...r) {
	read(f);
	read(r...);
}

template<typename T> void write(T &x) {
	cout << x;
}
template<typename F, typename... R> void write(const F &f, const R &...r) {
	write(f);
	write(r...);
}

void print() {
	write("\n");
}
template<typename F, typename... R> void print(const F &f, const R &...r) {
	write(f);
	if (sizeof...(r)) write(" ");

	write(r...);
}

void solve() {

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int t;
	read(t);

	while (t--) {
		solve();

		print();
	}

	return 0;
}

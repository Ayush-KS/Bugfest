// Always remember that you are absolutely unique, just like everyone else!

#include <iostream>
#include <vector>
using namespace std;


// DEBUGGING SECTION
void __print(int x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}


#define fastio  ios_base::sync_with_stdio(false);cin.tie(NULL)
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)


#define MOD     1000000007
#define INF     3e18
#define pb      push_back
#define endl    '\n' // Remove if interactive
#define ff      first
#define ss      second
#define FOR(i, a, b)   for(int i = a; i < b; i++)


//#include <algorithm>
//#include <cstring>
//#include <map>
//#include <set>
//#include <queue>
//#include <stack>
//#include <math.h>

//#include <bits/stdc++.h>

#define int     long long
#define pii     pair<int, int>
#define vi      vector<int>
#define vvi     vector<vi>
#define vpii    vector<pii>
#define all(x)  x.begin(), x.end()

int power(int x, int y) {
	int ans = 1; x %= MOD;
	while (y) {
		if (y & 1)
			ans = (x * ans) % MOD;
		x = (x * x) % MOD;
		y >>= 1;
	}
	return ans;
}




// comparator(A, B) -> should return true if A needs to come before B!
// ALWAYS RETURN FALSE IF A == B

// USE INTEGERS TO REDUCE RUNTIME!



void solve() {

}



int32_t main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	// freopen("error.txt", "w", stderr);
	freopen("output.txt", "w", stdout);
#endif

	fastio;
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}

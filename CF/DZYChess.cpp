/*
A. DZY Loves Chessboard
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
DZY loves chessboard, and he enjoys playing with it.

He has a chessboard of n rows and m columns. Some cells of the chessboard are bad, others are good. For every good cell, DZY wants to put a chessman on it. Each chessman is either white or black. After putting all chessmen, DZY wants that no two chessmen with the same color are on two adjacent cells. Two cells are adjacent if and only if they share a common edge.

You task is to find any suitable placement of chessmen on the given chessboard.

Input
The first line contains two space-separated integers n and m (1 ≤ n, m ≤ 100).

Each of the next n lines contains a string of m characters: the j-th character of the i-th string is either "." or "-". A "." means that the corresponding cell (in the i-th row and the j-th column) is good, while a "-" means it is bad.

Output
Output must contain n lines, each line must contain a string of m characters. The j-th character of the i-th string should be either "W", "B" or "-". Character "W" means the chessman on the cell is white, "B" means it is black, "-" means the cell is a bad cell.

If multiple answers exist, print any of them. It is guaranteed that at least one answer exists.

Examples
inputCopy
1 1
.
outputCopy
B
inputCopy
2 2
..
..
outputCopy
BW
WB
inputCopy
3 3
.-.
---
--.
outputCopy
B-B
---
--B
Note
In the first sample, DZY puts a single black chessman. Of course putting a white one is also OK.

In the second sample, all 4 cells are good. No two same chessmen share an edge in the sample output.

In the third sample, no good cells are adjacent. So you can just put 3 chessmen, no matter what their colors are.


*/
#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <chrono>
#include <complex>
using namespace std;
#define ll long long
#define ld long double
#define ui unsigned int
#define ull unsigned ll
#define mp                   make_pair
#define eb                   emplace_back
#define pb                   push_back
#define pf                   push_front
#define popb                 pop_back
#define popf                 pop_front
#define hashmap              unordered_map
#define hashset              unordered_set
#define lb                   lower_bound
#define ub                   upper_bound
#define all(a)               (a).begin(), (a).end()
#define rall(a)              (a).rbegin(), (a).rend()
#define ff                   first
#define ss                   second
#define foi(n) for(ll i=0;i<n;i++)
#define foj(n) for(ll j=0;j<n;j++)
#define fok(n) for(ll k=0;k<n;k++)
#define forr(i,a,b) for(ll i=a;i<b;i++)
#define forrr(i,b,a) for(ll i=b;i>=a;i--)
#define forrrr(i,a,b,k) for(ll i=a;i<b;i=i+k)
#define graph          vector<vector<int>>
#define sz(v) v.size()
typedef pair<int, int> pii;
typedef pair<ll, ll>   pll;
typedef vector<int>         vi;
typedef vector<ll>          vll;
typedef vector<string>      vs;
typedef vector<double>      vd;
typedef vector<pii>         vpii;
typedef vector<pll>         vpll;
typedef pair<ll, pll>      plll;
typedef vector<plll>      vplll;
typedef  vector<string> 	     vs;
typedef  vector<char>	         vc;
typedef  vector<bool>            vb;
typedef  map<string, int>         msi;
typedef  map<int, int>	         mii;
typedef  map<ll, ll>             mll;
typedef  map<char, int>           mci;
typedef  map<int, string>	     mis;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;
#define MOD  1000000007;
void solve();


int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("error1.txt", "w", stderr);
	freopen("output1.txt", "w", stdout);
#endif


		solve();


	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
ll ceils(ll x, ll y) {
	return x / y + ((x % y) != 0);
}
ll mult(ll x, ll y, ll mod) {
	return (x * y) % mod;
}
ll bin_pow(ll x, ll p, ll mod) {
	if (p == 0) return 1;
	if (p & 1) return mult(bin_pow(x, p - 1, mod), x, mod);
	return bin_pow(mult(x, x, mod), p / 2, mod);
}
bool isPrime(ll n)
{
	if (n <= 1)  return false;
	if (n <= 3)  return true;
	if (n % 2 == 0 || n % 3 == 0) return false;

	for (ll i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}
void solve()
{
	ll n, m;
	cin >> n >> m;
	char a[n][m]; char b[n][m];
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if ((i + j) % 2)
				a[i][j] = 'W';
			else
				a[i][j] = 'B';
		}
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cin >> b[i][j];
		}
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			if (b[i][j] == '.')
				b[i][j] = a[i][j];
		}
	}
	for (ll i = 0; i < n; i++) {
		for (ll j = 0; j < m; j++) {
			cout << b[i][j];
		}
		cout << endl;
	}

}

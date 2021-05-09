/*
D. Three Integers
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given three integers a≤b≤c.

In one move, you can add +1 or −1 to any of these integers (i.e. increase or decrease any number by one). You can perform such operation any (possibly, zero) number of times, you can even perform this operation several times with one number. Note that you cannot make non-positive numbers using such operations.

You have to perform the minimum number of such operations in order to obtain three integers A≤B≤C such that B is divisible by A and C is divisible by B.

You have to answer t independent test cases.

Input
The first line of the input contains one integer t (1≤t≤100) — the number of test cases.

The next t lines describe test cases. Each test case is given on a separate line as three space-separated integers a,b and c (1≤a≤b≤c≤104).

Output
For each test case, print the answer. In the first line print res — the minimum number of operations you have to perform to obtain three integers A≤B≤C such that B is divisible by A and C is divisible by B. On the second line print any suitable triple A,B and C.

Example
inputCopy
8
1 2 3
123 321 456
5 10 15
15 18 21
100 100 101
1 22 29
3 19 38
6 30 46
outputCopy
1
1 1 3
102
114 228 456
4
4 8 16
6
18 18 18
1
100 100 100
7
1 22 22
2
1 19 38
8
6 24 48

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
typedef pair< ll, pll>      plll;
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
typedef priority_queue <ll> pq;
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;
const ll MOD = 1000000007;
void solve();
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("error1.txt", "w", stderr);
	freopen("output1.txt", "w", stdout);
#endif


	ll t ; cin >> t;
	while (t--)
	{
		solve();
		cout << "\n";
	}

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
	return 0;
}
ll ceils(ll x, ll y) {
	return x / y + ((x % y) != 0);
}
ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}


ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;

}
void solve() {
	ll a, b, c;
	cin >> a >> b >> c;
	ll ans = 1111111111;
	ll x, y, z;
	for(ll i=1;i<2 * a + 1;i++) {
		for (ll j = i; j <= 2 * b; j += i) {
			fok(2) {
				ll m = j * (c / j) + k * j;
				ll res = abs(i - a) + abs(j - b) + abs(m - c);
				if (ans > res) {
					ans = res;
					x = i;
					y = j;
					z = m;
				}
			}
		}
	}
	cout << ans << endl ;
	cout << x << " " << y << " " << z;

}

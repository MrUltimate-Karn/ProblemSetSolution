/*
A. Odd Selection
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Shubham has an array a of size n, and wants to select exactly x elements from it, such that their sum is odd. These elements do not have to be consecutive. The elements of the array are not guaranteed to be distinct.

Tell him whether he can do so.

Input
The first line of the input contains a single integer t (1≤t≤100) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers n and x (1≤x≤n≤1000) — the length of the array and the number of elements you need to choose.

The next line of each test case contains n integers a1,a2,…,an (1≤ai≤1000) — elements of the array.

Output
For each test case, print "Yes" or "No" depending on whether it is possible to choose x elements such that their sum is odd.

You may print every letter in any case you want.

Example
inputCopy
5
1 1
999
1 1
1000
2 1
51 50
2 2
51 50
3 3
101 102 103
outputCopy
Yes
No
Yes
Yes
No
Note
For 1st case: We must select element 999, and the sum is odd.

For 2nd case: We must select element 1000, so overall sum is not odd.

For 3rd case: We can select element 51.

For 4th case: We must select both elements 50 and 51  — so overall sum is odd.

For 5th case: We must select all elements  — but overall sum is not odd.


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
	ll n, x;
	cin >> n >> x;
	ll o = 0, e = 0;
	foi(n) {
		ll y;
		cin >> y;
		if (y % 2)
			o++;
		else
			e++;
	}
	if (o == 0 or (e == 0 and x % 2 == 0)) {
		cout << "NO";
		return;
	}
	for (ll i = 1; i <= o; i += 2) {
		if (i + e >= x ) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";


}

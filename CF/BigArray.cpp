/*
A. Eshag Loves Big Arrays
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Eshag has an array a consisting of n integers.

Eshag can perform the following operation any number of times: choose some subsequence of a and delete every element from it which is strictly larger than AVG, where AVG is the average of the numbers in the chosen subsequence.

For example, if a=[1,4,3,2,4] and Eshag applies the operation to the subsequence containing a1, a2, a4 and a5, then he will delete those of these 4 elements which are larger than a1+a2+a4+a54=114, so after the operation, the array a will become a=[1,3,2].

Your task is to find the maximum number of elements Eshag can delete from the array a by applying the operation described above some number (maybe, zero) times.

A sequence b is a subsequence of an array c if b can be obtained from c by deletion of several (possibly, zero or all) elements.

Input
The first line contains an integer t (1≤t≤100) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n (1≤n≤100) — the length of the array a.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤100) — the elements of the array a.

Output
For each test case print a single integer — the maximum number of elements Eshag can delete from the array a.

Example
inputCopy
3
6
1 1 1 2 2 3
6
9 9 9 9 9 9
6
6 4 1 1 4 1
outputCopy
3
0
3
Note
Consider the first test case.

Initially a=[1,1,1,2,2,3].

In the first operation, Eshag can choose the subsequence containing a1, a5 and a6, their average is equal to a1+a5+a63=63=2. So a6 will be deleted.

After this a=[1,1,1,2,2].

In the second operation, Eshag can choose the subsequence containing the whole array a, the average of all its elements is equal to 75. So a4 and a5 will be deleted.

After this a=[1,1,1].

In the second test case, Eshag can't delete any element.

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
typedef  map<ll, vll>             mvll;
typedef  map<char, int>           mci;
typedef  map<int, string>	     mis;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef priority_queue <ll> pq;
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;
const ll MOD = 1000000007;
void solve();
const ll N = 1e6 + 1;
ll pairx[N];
ll dp[N][2];
const ll modx = 998244353;
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
ll powmod(ll x, ll y) {
	ll res = 1;
	for (ll i = 0; i < y; i++) {
		res = res * x % MOD;
	}
	return res;
}
void solve() {
	ll n;
	cin >> n;
	ll a[n];
	foi(n)
	cin >> a[i];
	sort(a, a + n);
	ll cnt = 0;
	foi(n) {
		if (a[i] == a[0])
			cnt++;
		else
			break;
	}
	cout << n - cnt;
}

 

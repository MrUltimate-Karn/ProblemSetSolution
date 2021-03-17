/*
C2. k-LCM (hard version)
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
It is the hard version of the problem. The only difference is that in this version 3≤k≤n.

You are given a positive integer n. Find k positive integers a1,a2,…,ak, such that:

a1+a2+…+ak=n
LCM(a1,a2,…,ak)≤n2
Here LCM is the least common multiple of numbers a1,a2,…,ak.

We can show that for given constraints the answer always exists.

Input
The first line contains a single integer t (1≤t≤104)  — the number of test cases.

The only line of each test case contains two integers n, k (3≤n≤109, 3≤k≤n).

It is guaranteed that the sum of k over all test cases does not exceed 105.

Output
For each test case print k positive integers a1,a2,…,ak, for which all conditions are satisfied.

Example
inputCopy
2
6 4
9 5
outputCopy
1 2 2 1 
1 3 3 1 1 

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
	ll n, k;
	cin >> n >> k;

	foi(k - 3)
	cout << 1 << " ";
	if ((n - k + 3) % 2)
		cout << 1 << " " << (n - k + 3) / 2 << " " << (n - k + 3)  / 2;
	else if ((n - k + 3) % 4 == 0)
		cout << (n - k + 3)  / 2 << " " << (n - k + 3)  / 4 << " " << (n - k + 3)  / 4;
	else
		cout << 2 << " " << (n - k + 3)  / 2 - 1 << " " << (n - k + 3)  / 2 - 1;


}

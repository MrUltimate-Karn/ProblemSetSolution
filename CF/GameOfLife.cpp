/*
William really likes the cellular automaton called "Game of Life" so he decided to make his own version. For simplicity, William decided to define his cellular automaton on an array containing n cells, with each cell either being alive or dead.

Evolution of the array in William's cellular automaton occurs iteratively in the following way:

If the element is dead and it has exactly 1 alive neighbor in the current state of the array, then on the next iteration it will become alive. For an element at index i the neighbors would be elements with indices i−1 and i+1. If there is no element at that index, it is considered to be a dead neighbor.
William is a humane person so all alive elements stay alive.
Check the note section for examples of the evolution.

You are given some initial state of all elements and you need to help William find the state of the array after m iterations of evolution.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤103). Description of the test cases follows.

The first line of each test case contains two integers n and m (2≤n≤103,1≤m≤109), which are the total number of cells in the array and the number of iterations.

The second line of each test case contains a string of length n made up of characters "0" and "1" and defines the initial state of the array. "1" means a cell is alive and "0" means it is dead.

It is guaranteed that the sum of n over all test cases does not exceed 104.

Output
In each test case output a string of length n, made up of characters "0" and "1"  — the state of the array after m iterations of evolution.

Example
inputCopy
4
11 3
01000000001
10 2
0110100101
5 2
10101
3 100
000
outputCopy
11111001111
1110111101
10101
000
Note
Sequence of iterations of evolution for the first test case

01000000001  — initial state
11100000011  — first iteration of evolution
11110000111  — second iteration of evolution
11111001111  — third iteration of evolution
Sequence of iterations of evolution for the second test case

0110100101  — initial state
1110111101  — first iteration of evolution
1110111101  — second iteration of evolution

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
#define graph          vector<vector<ll>>
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
typedef  map<char, ll>           mcl;
typedef  unordered_map<char, ll>           umcl;
typedef  unordered_map< ll, char>           umlc;
typedef  map<int, string>	     mis;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef priority_queue <ll> pq;
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;
typedef priority_queue<ll, vector<ll>, greater<ll>> prq;
const ll MOD = 1000000007;
const ll modx = 998244353;
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
ll powmod(ll x, ll y) {
	ll res = 1;
	for (ll i = 0; i < y; i++) {
		res = res * x % MOD;
	}
	return res;
}
bool isPrime(ll n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (ll i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}
void solve() {
	ll n, m;
	cin >> n >> m;
	string s;
	cin >> s;
	m = min(m, n);
	while (m--) {
		string t = s;
		if (s[1] == '1')
			t[0] = '1';
		if (s[s.size() - 2] == '1')
			t[s.size() - 1] = '1';
		for (ll i = 1; i < s.size() - 1; i++) {
			if (s[i - 1] == '1' and s[i + 1] == '1')
				continue;
			else if (s[i - 1] == '1' or s[i + 1] == '1')
				t[i] = '1';
		}
		s = t;
	}
	cout << s;

}




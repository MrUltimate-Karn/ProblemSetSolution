/*
D. Guess the Permutation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
This is an interactive problem.

Jury initially had a sequence a of length n, such that ai=i.

The jury chose three integers i, j, k, such that 1≤i<j<k≤n, j−i>1. After that, Jury reversed subsegments [i,j−1] and [j,k] of the sequence a.

Reversing a subsegment [l,r] of the sequence a means reversing the order of elements al,al+1,…,ar in the sequence, i. e. al is swapped with ar, al+1 is swapped with ar−1, etc.

You are given the number n and you should find i, j, k after asking some questions.

In one question you can choose two integers l and r (1≤l≤r≤n) and ask the number of inversions on the subsegment [l,r] of the sequence a. You will be given the number of pairs (i,j) such that l≤i<j≤r, and ai>aj.

Find the chosen numbers i, j, k after at most 40 questions.

The numbers i, j, and k are fixed before the start of your program and do not depend on your queries.

Input
Each test consists of multiple test cases. The first line contains a single integer t (1≤t≤100) — the number of test cases. Description of the test cases follows.

The single line of each test case contains a single integer n (4≤n≤109). After reading it you should start an interaction process by asking questions for that test case. After giving an answer you should:

Terminate your program if that is the last test case.
Proceed to the next test case otherwise.
Interaction
To ask number of inversions on a subsegment [l,r], print "? l r", where (1≤l≤r≤n). You can ask at most 40 questions in each test case. As a result you should read a single integer x.

If x=−1, your program made an invalid question or you exceeded the number of questions for that test case. Your program should terminate immediately (otherwise it can get any verdict instead of "Wrong Answer").
Otherwise x is equal to the number of inversions on the subsegment [l,r] of the sequence a.
To give the answer, print "! i j k", where i, j, k are the numbers you found. You should continue solving the next test cases or terminate the program after that.

After printing a question or an answer do not forget to print the end of line and flush the output. Otherwise, you will get an "Idleness limit exceeded" verdict. To do this, use:

fflush(stdout) or cout.flush() in C++;
System.out.flush() in Java;
flush(output) in Pascal;
stdout.flush() in Python;
See the documentation for other languages.
Hacks

To make a hack, use the following format:

The first line contains a single integer t (1≤t≤100) — the number of test cases.

Each of the next t lines contains four integers n, i, j, k (4≤n≤109, 1≤i<j<k≤n, j−i>1).

Example
inputCopy
2 
5 

4 

3 

3 

5 

2 

2 

1 
outputCopy


? 1 5

? 2 5

? 3 5

! 1 3 5

? 1 5

? 2 5

? 3 5

! 2 4 5
Note
In the first test case, i=1, j=3, k=5, so the sequence a is [2,1,5,4,3].

In the second test case, i=2, j=4, k=5, so the sequence a is [1,3,2,5,4].
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
typedef queue<ll>           qll;
typedef vector<plll>      vplll;
typedef  vector<set<ll>>   vsll;
typedef  vector<char>	         vc;
typedef  vector<bool>            vb;
typedef  map<string, int>         msi;
typedef  map<int, int>	         mii;
typedef  map<ll, ll>             mll;
typedef  map<ll, vll>             mvll;
typedef  map<vll, ll>             mvlll;
typedef  map<char, ll>           mcl;
typedef map<pair<ll, ll>, ll>  mplll;
typedef  unordered_map<char, ll>           umcl;
typedef  unordered_map< ll, char>           umlc;
typedef  unordered_map< ll, ld>           umld;
typedef  map<int, string>	     mis;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef priority_queue <ll> pq;
typedef priority_queue<pii, vector<pii>, greater<pii> > pqq;
typedef priority_queue<ll, vector<ll>, greater<ll>> prq;
const ll MOD = 1000000007;
const ll modx = 998244353;
ld PI = 3.1415926535897;
const ll N = 200010;
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
		cout << endl;
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
bool COMP(pll l, pll r) {
	return l.ss < r.ss;
}
ll kadanesAlgo(vll a)
{
	ll n = a.size();

	ll currMax = 0;
	ll mx = INT_MIN;

	foi(n)
	{
		currMax += a[i];

		if (currMax <= a[i])
		{
			currMax = a[i];
		}

		mx = max(currMax, mx);
	}
	return mx;
}
ll ask(ll x, ll y) {
	cout << "?" << " ";
	cout << x << " " << y << endl;
	ll s;
	cin >> s;
	return s;
}
ll binpow(ll a, ll b, ll m) {
	a %= m;
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}
bool is_sorted(vector<ll>a) {
	ll x = 0;
	for (ll i = 0; i < a.size() - 1; i++) {
		if (a[i] < a[i + 1])
			x++;
	}
	return x == a.size() - 1;
}
bool check(string a, string b) {
	ll n = a.size(), m = b.size();
	if (a < b) {
		return true;
	}
	if (a > b) {
		return false;
	}
	foi(a.size()) {
		if (a[i] > b[i]) {
			return false;
		}
		else if (a[i] < b[i]) {
			return true;
		}
	}
	return false;
}
bool isSubSequence(string a, string b, ll m, ll n) {
	ll j = 0;
	for (ll i = 0; i < n and j < m; i++)
		if (a[j] == b[i])
			j++;
	return (j == m);
}
ll power(ll n, ll x) {
	ll ans = 1;
	foi(n) {
		ans *= x;
	}
	return ans;
}
void solve() {
	ll n;
	cin >> n ;
	ll f = ask(1, n), l = 0, r = n;
	while (l + 1 < r) {
		ll m = (l + r) / 2;
		if (ask(1, m) == f) {
			r = m;
		} else {
			l = m;
		}
	}
	ll k = r - ask(1, r) + ask(1, r - 1);
	ll i = k - ask(1, k - 1) + ask(1, k - 2) - 1;
	cout << "!" << " " << i << " " << k << " " << r ;
}




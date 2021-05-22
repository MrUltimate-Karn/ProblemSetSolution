/*
C. Sequence Pair Weight
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
The weight of a sequence is defined as the number of unordered pairs of indexes (i,j) (here i<j) with same value (ai=aj). For example, the weight of sequence a=[1,1,2,2,1] is 4. The set of unordered pairs of indexes with same value are (1,2), (1,5), (2,5), and (3,4).

You are given a sequence a of n integers. Print the sum of the weight of all subsegments of a.

A sequence b is a subsegment of a sequence a if b can be obtained from a by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤105). Description of the test cases follows.

The first line of each test case contains a single integer n (1≤n≤105).

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109).

It is guaranteed that the sum of n over all test cases does not exceed 105.

Output
For each test case, print a single integer — the sum of the weight of all subsegments of a.

Example
inputCopy
2
4
1 2 1 1
4
1 2 3 4
outputCopy
6
0
Note
In test case 1, all possible subsegments of sequence [1,2,1,1] having size more than 1 are:
[1,2] having 0 valid unordered pairs;
[2,1] having 0 valid unordered pairs;
[1,1] having 1 valid unordered pair;
[1,2,1] having 1 valid unordered pairs;
[2,1,1] having 1 valid unordered pair;
[1,2,1,1] having 3 valid unordered pairs.
Answer is 6.
In test case 2, all elements of the sequence are distinct. So, there is no valid unordered pair with the same value for any subarray. Answer is 0.

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
	ll n;
	cin >> n;
	vll a;
	mll m;
	foi(n) {
		ll x;
		cin >> x;
		a.pb(x);
	}
	ll ans = 0;
	foi(a.size()) {
		ans += m[a[i]] * (n - i);
		m[a[i]] += i + 1;
	}
	cout << ans;
}
 

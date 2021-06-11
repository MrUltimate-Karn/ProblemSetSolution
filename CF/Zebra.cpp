/*
C. Plasticine zebra
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Is there anything better than going to the zoo after a tiresome week at work? No wonder Grisha feels the same while spending the entire weekend accompanied by pretty striped zebras.

Inspired by this adventure and an accidentally found plasticine pack (represented as a sequence of black and white stripes), Grisha now wants to select several consequent (contiguous) pieces of alternating colors to create a zebra. Let's call the number of selected pieces the length of the zebra.

Before assembling the zebra Grisha can make the following operation 0 or more times. He splits the sequence in some place into two parts, then reverses each of them and sticks them together again. For example, if Grisha has pieces in the order "bwbbw" (here 'b' denotes a black strip, and 'w' denotes a white strip), then he can split the sequence as bw|bbw (here the vertical bar represents the cut), reverse both parts and obtain "wbwbb".

Determine the maximum possible length of the zebra that Grisha can produce.

Input
The only line contains a string s (1≤|s|≤105, where |s| denotes the length of the string s) comprised of lowercase English letters 'b' and 'w' only, where 'w' denotes a white piece and 'b' denotes a black piece.

Output
Print a single integer — the maximum possible zebra length.

Examples
inputCopy
bwwwbwwbw
outputCopy
5
inputCopy
bwwbwwb
outputCopy
3
Note
In the first example one of the possible sequence of operations is bwwwbww|bw → w|wbwwwbwb → wbwbwwwbw, that gives the answer equal to 5.

In the second example no operation can increase the answer.

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
typedef map<pair<ll, ll>, ll>  mplll;
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
//	ll t ; cin >> t;
//	while (t--)
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
void solve() {
	string s;
	cin >> s;
	string s1 = s;
	reverse(all(s1));
	s += s; s1 += s1;
	ll ans = 1, t = 0;
	foi(s.size()) {
		if (i == 0)
			t++;
		else if(s[i] != s[i - 1])
	    	t++;
		else{
			ans = max(ans, t);
			t = 1;
		}
	}
	ans = max(ans, t), t = 0;
	foi(s1.size()) {
		if (i == 0)
			t++;
		else if(s1[i] != s1[i - 1])
	    	t++;
		else{
			ans = max(ans, t);
			t = 1;
		}
	}
	ans = max(ans, t);
	ans=min(ans,(ll)s.size()/2);
	cout << ans;
}

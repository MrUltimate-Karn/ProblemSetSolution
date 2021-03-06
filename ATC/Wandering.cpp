/*
D - Wandering  / 
Time Limit: 2 sec / Memory Limit: 1024 MB

Score : 
400
 points

Problem Statement
Given is a number sequence 
A
1
,
A
2
,
A
3
,
…
,
A
N
, which may contain negative elements.
On a number line, there is a robot at coordinate 
0
. It will do the following actions in order:

Move 
A
1
 in the positive direction.
Move 
A
1
 in the positive direction, and then move 
A
2
 in the positive direction.
Move 
A
1
 in the positive direction, then move 
A
2
 in the positive direction, and then move 
A
3
 in the positive direction.
⋮

Move 
A
1
 in the positive direction, then move 
A
2
 in the positive direction, then move 
A
3
 in the positive direction, 
…
, 
…
, and then move 
A
N
 in the positive direction.
Find the greatest coordinate occupied by the robot from the beginning to the end of the process.

Constraints
1
≤
N
≤
200000
−
10
8
≤
A
i
≤
10
8
All values in input are integers.
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
void solve() {
	ll ans = 0,n;
	cin >> n;
	ll sum = 0,p = 0,mx = 0;
	foi(n){
		ll m;
		cin >> m;
		sum += m;
		mx = max(mx, sum);
		ans = max(p + mx, ans);
		p += sum;
	}
	ans = max(ans, p);
	cout << ans ;
}

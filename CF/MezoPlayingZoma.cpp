/*
A. Mezo Playing Zoma
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Today, Mezo is playing a game. Zoma, a character in that game, is initially at position x=0. Mezo starts sending n commands to Zoma. There are two possible commands:

'L' (Left) sets the position x:=x−1;
'R' (Right) sets the position x:=x+1.
Unfortunately, Mezo's controller malfunctions sometimes. Some commands are sent successfully and some are ignored. If the command is ignored then the position x doesn't change and Mezo simply proceeds to the next command.

For example, if Mezo sends commands "LRLR", then here are some possible outcomes (underlined commands are sent successfully):

"LRLR" — Zoma moves to the left, to the right, to the left again and to the right for the final time, ending up at position 0;
"LRLR" — Zoma recieves no commands, doesn't move at all and ends up at position 0 as well;
"LRLR" — Zoma moves to the left, then to the left again and ends up in position −2.
Mezo doesn't know which commands will be sent successfully beforehand. Thus, he wants to know how many different positions may Zoma end up at.

Input
The first line contains n (1≤n≤105) — the number of commands Mezo sends.

The second line contains a string s of n commands, each either 'L' (Left) or 'R' (Right).

Output
Print one integer — the number of different positions Zoma may end up at.

Example
inputCopy
4
LRLR
outputCopy
5
Note
In the example, Zoma may end up anywhere between −2 and 2.


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
typedef pair<pll, ll>      plll;
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


	//ll t ; cin >> t;
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
void solve()
{
	ll n;
	cin >> n;
	string s;
	cin >> s;
	cout << s.size() + 1;
}

 

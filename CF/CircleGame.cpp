/*
D. Circle Game
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Utkarsh is forced to play yet another one of Ashish's games. The game progresses turn by turn and as usual, Ashish moves first.

Consider the 2D plane. There is a token which is initially at (0,0). In one move a player must increase either the x coordinate or the y coordinate of the token by exactly k. In doing so, the player must ensure that the token stays within a (Euclidean) distance d from (0,0).

In other words, if after a move the coordinates of the token are (p,q), then p2+q2≤d2 must hold.

The game ends when a player is unable to make a move. It can be shown that the game will end in a finite number of moves. If both players play optimally, determine who will win.

Input
The first line contains a single integer t (1≤t≤100) — the number of test cases.

The only line of each test case contains two space separated integers d (1≤d≤105) and k (1≤k≤d).

Output
For each test case, if Ashish wins the game, print "Ashish", otherwise print "Utkarsh" (without the quotes).

Example
inputCopy
5
2 1
5 2
10 3
25 4
15441 33
outputCopy
Utkarsh
Ashish
Utkarsh
Utkarsh
Ashish
Note
In the first test case, one possible sequence of moves can be

(0,0)−→−−−Ashish (0,1)−→−−−−Utkarsh (0,2).

Ashish has no moves left, so Utkarsh wins.
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
ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}
ll fac(ll n) {
	while (n % 4 == 0) {
		n /= 4;
	}
	for (ll i = 3; i <= sqrt(n); i += 2) {
		while (n % (i * i) == 0) {
			n /= (i * i);
		}
	}
	return n;
}

void solve()
{
	ll d, k;
	cin >> d >> k;
	ll x = 0, y = 0;
	while (1) {
		if (x <= y && (x + k) * (x + k) + y * y <= d * d)
			x += k;
		else if (x > y && (y + k) * (y + k) + x * x <= d * d)
			y += k;
		else
			break;
	}
	if (x == y)
		cout << "Utkarsh" ;
	else
		cout << "Ashish" ;
}



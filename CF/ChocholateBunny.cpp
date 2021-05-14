/*
C. Chocolate Bunny
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
This is an interactive problem.

We hid from you a permutation p of length n, consisting of the elements from 1 to n. You want to guess it. To do that, you can give us 2 different indices i and j, and we will reply with pimodpj (remainder of division pi by pj).

We have enough patience to answer at most 2⋅n queries, so you should fit in this constraint. Can you do it?

As a reminder, a permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order. For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array) and [1,3,4] is also not a permutation (n=3 but there is 4 in the array).

Input
The only line of the input contains a single integer n (1≤n≤104) — length of the permutation.

Interaction
The interaction starts with reading n.

Then you are allowed to make at most 2⋅n queries in the following way:

"? x y" (1≤x,y≤n,x≠y).
After each one, you should read an integer k, that equals pxmodpy.

When you have guessed the permutation, print a single line "! " (without quotes), followed by array p and quit.

After printing a query do not forget to output end of line and flush the output. Otherwise, you will get Idleness limit exceeded. To do this, use:

fflush(stdout) or cout.flush() in C++;
System.out.flush() in Java;
flush(output) in Pascal;
stdout.flush() in Python;
see documentation for other languages.
Exit immediately after receiving "-1" and you will see Wrong answer verdict. Otherwise you can get an arbitrary verdict because your solution will continue to read from a closed stream.

Hack format

In the first line output n (1≤n≤104). In the second line print the permutation of n integers p1,p2,…,pn.

Example
inputCopy
3

1

2

1

0
outputCopy
? 1 2

? 3 2

? 1 3

? 2 1

! 1 3 2

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
ll ask(ll x, ll y) {
    cout << "? " << x + 1 << ' ' << y + 1 << endl;
    ll z;
    cin >> z;
    return z;
}
void solve() {

	ll n;
	cin >> n;
    vll ans(n, -1);
    ll mx = 0;
    for (ll i = 1; i < n; i++) {
        ll a = ask(mx, i);
        ll b = ask(i, mx);
        if (a > b) {
            ans[mx] = a;
            mx = i;
        } else {
            ans[i] = b;
        }
    }
    ans[mx] = n;
    cout << "! ";
    foi(n)
     cout << ans[i] << ' ';
}

#include <bits/stdc++.h>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<ll> v32;
typedef vector<vector<ll>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, n) for (ll i = 0; i < n; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define nl cout << endl
#define arrin(i, arr, n)       \
    ;                          \
    for (ll i = 0; i < n; i++) \
    {                          \
        cin >> arr[i];         \
    }
#define arrout(i, arr, n)      \
    ;                          \
    for (ll i = 0; i < n; i++) \
    {                          \
        cout << arr[i] << " "; \
    }
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        if (n >= k)
        {
            if (k % 2 == 0)
            {
                ll g = k / 2;
                arr[0] = g + 1;
                arr[g] = 1;
                cout << "YES\n";
                arrout(i, arr, n);
                cout << "\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            if (k % 2 == 0)
            {
                k = k / 2;
            }
            else
            {
                cout << "NO\n";
                continue;
            }
            while (k > n)
            {
                k = k / 2;
                if (k % 2 != 0 && k > n)
                {
                    cout << "NO\n";
                    continue;
                }
            }
            arr[0] = k + 1;
            arr[k] = 1;
            cout << "YES\n";
            arrout(i, arr, n);
            cout << "\n";
        }
    }

    return 0;
}
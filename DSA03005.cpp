#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

void in(ll a[], ll n, ll k)
{
    sort(a, a + n);
    ll sum1 = 0, sum2 = 0;
    if (k < n - k)
    {
        for (int i = 0; i < k; i++)
            sum1 += a[i];
        for (int i = k; i < n; i++)
            sum2 += a[i];
    }
    else 
    {
        for(int i = 0; i < n-k; i++)
            sum1 += a[i];
        for(int i = n-k; i < n; i++)
            sum2 += a[i];
    }
    cout << sum2 - sum1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        in(a, n, k);
    }
    return 0;
}
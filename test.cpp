/* code by T.A.N */
#include<bits/stdc++.h>
#define ll long long
const long int N=1e3+5;
const long int mod=1e9+7;
using namespace std;

int n,a[N];
void solve()
{
	cin>>n;
	for(int i=0 ; i<n ; i++)	cin>>a[i];
	int res = abs(a[0] + a[1]);
	int l,r;
	for(int i=0 ; i<n-1 ; i++)
	{
		for(int j=i+1 ; j<n ; j++)
		{
			int k = abs(a[i] + a[j]);
			if(res >= k)
			{
				res = k;
				l = i;
				r = j;
			}
		}
	}
	int ans = a[l] + a[r];
	cout<<ans<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
//	ios_base::sync_with_stdio(0);cin.tie(0);
	return 0;
}

/* T.A.N */
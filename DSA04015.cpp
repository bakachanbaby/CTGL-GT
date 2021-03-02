#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, k, a[10000005];
void nhap(){
    cin>>n>>k;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    ll *p = lower_bound(a, a+n, k);
    if(p != a+n)
    {
        cout<<p-a<<endl;
    }
    else 
    cout<<-1<<endl;
}
int main(){
    cin>>t;
    while(t--)
    {
        nhap();
        in();
    }
}
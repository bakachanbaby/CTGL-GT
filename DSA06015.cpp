#include <bits/stdc++.h>
using namespace std;

int t, n, a[1000005];

void nhap(){
    cin>>n;
    for(int i = 0; i < n; i++)
        cin>>a[i];
}
void in(){
    sort(a, a+n);
    for(int i = 0; i < n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        in();
    }
    return 0;
}
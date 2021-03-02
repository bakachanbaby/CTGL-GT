#include <bits/stdc++.h>
using namespace std;

int t, n, k, a[100], sum;

void nhap(){
    cin>>n>>k;
    for(int i = 1; i <= n; i++)
        cin>>a[i];
}
void Try(int i){
    for(int j = 0; j < n; j++)
    {
        sum += a[j];
    }
}
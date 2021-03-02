#include <bits/stdc++.h>
using namespace std;

int t, n, dem, a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
int main(){
    cin>>t;
    while (t--)
    {
        cin>>n;
        dem = 0;
        for(int i = 9; i >= 0; i--)
        {
            dem += n/a[i];
            n%=a[i];
        }
        cout<<dem<<endl;
    }
    
}
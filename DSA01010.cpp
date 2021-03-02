//Sinh to hop chap k cua 1..n
#include <bits/stdc++.h>
using namespace std;
int n, k, X[1000], tmp[1000], dem;
bool cauhinhcuoi=false;
void sinh(){
	int i=k;
    
	while((i>0)&&(X[i]==n-k+i))	
        i--;
    if(i == 0){
        cauhinhcuoi=true;
    }



    
	else{
		X[i]=X[i]+1;
		for(int j=i+1; j<=k; j++)
            X[j]=X[i]+(j-i);	
	}
}
int check(){
    if(cauhinhcuoi)
        return k;
    dem = 0;
    for(int i = 1; i <= k; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            if(X[i] == tmp[j])
                dem++;
        }
    }
    return k-dem;
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
       cin>>n>>k;
       for(int j=1; j<=k; j++)	
       {
           cin>>X[j];
           tmp[j]=X[j];
       }
       sinh();
       cout<<check()<<endl;
    }
	return 0;
}
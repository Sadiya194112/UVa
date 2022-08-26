#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[10005];
int main(){
    ll n;
    while(cin>>n){
        ll i,j,x,sum=0, p, q,f=0,diff, mn=0;
//        cout<<mn<<endl;
        for(i=0; i<n; i++)   cin>>a[i];
        sort(a, a+n);
        cin>>x;
        for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){
                if(a[i]+a[j]==x){
                    diff = a[j]-a[i];
                    if(f==0 || diff<mn){
                        mn = diff;
                        p=a[i],q=a[j];
                        f=1;
                    }
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<p<<" and "<<q;
    }
    return 0;
}

//Link: https://usaco.org/index.php?page=viewproblem2&cpid=855

#include <bits/stdc++.h>
using namespace std;

int c1,c2,c3;
int a,b,c;

void milk(int i){
    if(i%3==0){
        if(a>=(c2-b)){
            a=a-(c2-b);
            b=c2;
        }else{
            b+=a;
            a=0;
        }
    }else if(i%3==1){
        if(b>=(c3-c)){
            b=b-(c3-c);
            c=c3;
        }else{
            c+=b;
            b=0;
        }
    }else{
        if(c>=(c1-a)){
            c=c-(c1-a);
            a=c1;
        }else{
            a+=c;
            c=0;
        }
    }
}

int main() {
    string name="mixmilk";
    ios_base::sync_with_stdio(0);
    freopen((name + ".in").c_str(), "r", stdin);
	freopen((name + ".out").c_str(), "w", stdout);

    cin>>c1>>a;
    cin>>c2>>b;
    cin>>c3>>c;

    for(int i=0;i<100;i++){
        milk(i);
    }

    cout<<a<<endl<<b<<endl<<c;
}

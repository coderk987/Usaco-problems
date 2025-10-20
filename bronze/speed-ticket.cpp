//Link: https://usaco.org/index.php?page=viewproblem2&cpid=855

#include <bits/stdc++.h>
using namespace std;

vector<int> legal(100,0);
vector<int> bessie(100,0);

int main() {
    string name="speeding";
    ios_base::sync_with_stdio(0);
    freopen((name + ".in").c_str(), "r", stdin);
	freopen((name + ".out").c_str(), "w", stdout);

    int n,m;
    cin>>n>>m;
    int iter=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        for(int j=iter;j<iter+a;j++){
            legal[j]=b;
        }
        iter+=a;
    }
    iter=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        for(int j=iter;j<iter+a;j++){
            bessie[j]=b;
        }
        iter+=a;
    }
    int best=0;
    for(int i=0;i<100;i++){
        best=max(best, bessie[i]-legal[i]);
    }
    cout<<best;
}

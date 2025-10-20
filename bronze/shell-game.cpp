// Link: https://usaco.org/index.php?page=viewproblem2&cpid=891

#include <bits/stdc++.h>
using namespace std;

int main() {
    string name="shell";
    ios_base::sync_with_stdio(0);
    freopen((name + ".in").c_str(), "r", stdin);
	freopen((name + ".out").c_str(), "w", stdout);

	int n;
    cin>>n;
    vector<vector<int>> input;
    for(int i=0;i<n;i++){
        int a,b,g;
        cin>>a>>b>>g;
        vector<int> cur={a-1,b-1,g-1};
        input.push_back(cur);
    }

    int best=0;
    for(int i=0;i<3;i++){
        vector<int> shells={0,0,0};
        shells[i]=1;
        int ctr=0;
        for(int j=0;j<n;j++){
            swap(shells[input[j][0]],shells[input[j][1]]);
            if(shells[input[j][2]]==1) ctr++;
        }
        best=max(best,ctr);
    }
    cout<<best;
}
//Link: https://usaco.org/index.php?page=viewproblem2&cpid=664

#include <bits/stdc++.h>
using namespace std;

int main() {
    string name="blocks";
    ios_base::sync_with_stdio(0);
    freopen((name + ".in").c_str(), "r", stdin);
	freopen((name + ".out").c_str(), "w", stdout);

    vector<int> best(26,0);
    int n;
    cin>>n;
    while(n--){
        string s1, s2;
        cin>>s1>>s2;
        vector<int> freq1(26,0),freq2(26,0);
        for(auto c:s1){
            int id=((int)c-97);
            freq1[id]++;
        }
        for(auto c:s2){
            int id=((int)c-97);
            freq2[id]++;
        }

        for(int i=0;i<26;i++){
            best[i]+=max(freq1[i],freq2[i]);
        }
    }
    for(int i:best){
        cout<<i<<endl;
    }
}

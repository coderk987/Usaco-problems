#include <bits/stdc++.h>
using namespace std;

vector<int> apples;
int N;
int best=100000;

int apple_div(int i, int g1, int g2){
    if(i==N) return abs(g1-g2);
    return min(apple_div(i+1, g1+apples[i], g2), apple_div(i+1,g1,g2+apples[i]));
}

int main() {
    cin>>N;
    for(int i=0;i<N;i++){
        int x;
        cin>>x;
        apples.push_back(x);
    }
    cout<<apple_div(0, 0, 0);
}

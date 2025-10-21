#include <bits/stdc++.h>
using namespace std;

set<string> perms;
int ctr=0;

void create(string s, string cur,vector<int> done){
    if(cur.size()==s.size()){
        perms.insert(cur);
    }
    for(int j=0;j<s.size();j++){
        if(done[j]==0){
            done[j]=1;
            create(s,cur+s[j],done);
            done[j]=0;
        } 
    }
}


int main() {
    string s;
    cin>>s;
    vector<int> done(s.size(), 0);
    create(s, "", done);
    cout<<perms.size()<<endl;
    for(auto i:perms){
        cout<<i<<endl;
    }
}

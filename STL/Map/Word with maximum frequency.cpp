///https://www.geeksforgeeks.org/problems/word-with-maximum-frequency0120/1


#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();


int t;
cin>>t;

while(t--){
    string s;
    char c;
    cin>>c;
    getline(cin,s);
    s=c+s;

    string tmp;
    vector<string>v;
    for(auto u:s){
        if(isspace(u)){
            v.push_back(tmp);
            tmp.clear();

        }
        else tmp+=u;

    }
    v.push_back(tmp);

    map<string,int>cnt;
    int mxFrq=0;

    for(auto u:v){
        cnt[u]++;
        mxFrq=max(mxFrq,cnt[u]);

    }
    string ans;
    for(auto u:v){
        if(cnt[u]==mxFrq){
            ans=u;
            break;
        }
    }
    cout<<ans<<" "<<mxFrq<<endl;

}











return 0;
}


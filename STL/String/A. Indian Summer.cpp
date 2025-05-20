#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);





///https://codeforces.com/contest/44/problem/A
int main(){

optimize();



 int n;
 cin>>n;
    vector<pair<string ,string>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int Sz=unique(v.begin(),v.end())-v.begin();
    cout<<Sz<<endl;



return 0;
}



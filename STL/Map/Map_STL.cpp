#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();
/*
map<string,int>id;
id["Shakib"]=1;
id["Shafin"]=3;
id["Sanim"] =4;
id["Rahim"]=7;



cout<< id["Rahim"]<<endl;

*/

///map<string,string>gender


vector<long long >v={-1,123452432432,1,1,345324325432,123452432432};
map<long long ,int>cnt;

/*
for(int i=0;i<v.size();i++){
    cnt[v[i]]++;

}
cout<<cnt[123452432432]<<endl;
*/


for (auto  u:v)cnt[u]++;
for(auto u:cnt){
    cout<<u.first<<" "<<u.second<<endl;
}






map<string,int>id;
id["Shakib"]=1;
id["Shafin"]=3;
id["Sanim"] =4;
id["Rahim"]=7;
id["Rahim"]=3;

for(auto u: id)cout<<u.first<<" "<<u.second<<endl;




///using array unique map size

map<int ,bool>vis;
vector<int>v1={2,2,1,1,3};
for(auto u:v1) vis[u]=1;
for(auto u:vis )cout<<u.first<<" "<<u.second<<endl;



cout<<endl;
///count map using vector

vector <map<string , int >>v2;
map<string , int>c;
c["zxc"]=1;
v2.push_back(c);
cout<<v2[0]["zxc"]<<endl;





return 0;
}



#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();



///String sorting in non-decreasing order
string s="gfds";
sort(s.begin(),s.end());
cout<<s<<endl;



/// String sorting in non-increasing order

sort(s.rbegin(),s.rend());
cout<<s<<endl;


/// Getting all unique elements of a string.

s="aaadddssss";
int n=unique(s.begin(),s.end())-s.begin();
for(int i=0;i<n;i++)cout<<s[i];
cout<<endl;


/// Getting maximum element of string

cout<<*max_element(s.begin(),s.end())<<endl;


/// Getting minimum element of string

cout<<*min_element(s.begin(),s.end())<<endl;



/// If we need to sort some string on lexicographical order :


 vector<string> v;
    v.push_back( "Muhammad" );
    v.push_back( "nova" );
    v.push_back( "Maslenia Mubarrat" );
    v.push_back( "Rashedul Alam Anik" );
    v.push_back( "Farhan sadik Sakib" );
    v.push_back( "Gazi Mohaimin Iqbal" );

    sort(v.begin(),v.end());
    for(auto u:v)cout<<u<<endl;



s="asdf";
s.pop_back();
cout<<s.back()<<endl;





v = { "Shahriar", "Shahriar", "Momo", "Momo", "Sharif", "Sharif" };
int Sz = unique ( v.begin(), v.end() ) - v.begin();

cout<<Sz<<endl;

for(int i=0;i<Sz;i++)cout<<v[i]<<endl;



/// Converting int to string
int a=123;
s=to_string(a);
cout<<s<<endl;
cout<<typeid(s).name()<<endl;




s = "123";
a = stoi ( s );
cout << a << endl; ///123
a++;
cout << a << endl; /// 124;


/// Deleting a substring from string

s = "ShaKAKAhriar";

s.erase ( s.begin()+3, s.begin()+7 );
cout << s << endl;


s = "ashshasdakks";

if ( s.find( "asd" ) != -1 ) cout << "Substring found";
else cout << "Not found";









return 0;
}


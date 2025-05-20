#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

 vector<int> v;

    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );

    cout << v[0] << " " << v[1] << " " << v[2] << endl; /// 1 2 3


    cout << v.size() << endl; /// 3
    for ( int i = 0; i < v.size(); i++ ) cout << v[i] << " "; /// 1 3 3
    cout << endl;


    vector <int> v1 = { 2, 3, 4 };

    cout << v1.size() << endl; /// 3
    for ( int i = 0; i < v1.size(); i++ ) cout << v1[i] << " "; /// 2 3 4
    cout << endl;

    v.clear();
    cout << v.size() << endl; /// 0


    v1.resize(5);
    cout << v1.size() << endl; /// 5
    for ( int i = 0; i < v1.size(); i++ ) cout << v1[i] << " "; /// 2 3 4 0 0
    cout << endl;


    vector<int> a(5);

    cout << a.size() << endl; /// 5
    for ( int i = 0; i < a.size(); i++ ) cout << a[i] << " "; /// 0 0 0 0 0
    cout << endl;

    a = v1;

    for ( auto u : a ) cout << u << " "; /// 2 3 4 0 0
    cout << endl;





    ///part 2


    vector<int>::iterator it;
    for ( it = a.begin(); it != a.end(); it++ ) cout << *it << " "; /// 2 3 4 0 0
    cout << endl;


     a = { 3, 4, 5, 1, 2 };

    sort ( a.begin(), a.end() );
    for ( auto u : a ) cout << u << " "; /// 1 2 3 4 5
    cout << endl;


   sort ( a.rbegin(), a.rend() );

    for ( auto u : a ) cout << u << " "; /// 5 4 3 2 1
    cout << endl;


     a = { 3, 4, 5, 1, 2 };
    sort ( a.begin(), a.end(), greater<int>() );

    for ( auto u : a ) cout << u << " "; /// 5 4 3 2 1
    cout << endl;



     a = { 3, 4, 5, 1, 2 };

    reverse( a.begin(), a.end() );

    for ( auto u : a ) cout << u << " "; /// 2 1 5 4 3
    cout << endl;

    cout << a.back() << endl; /// 3
    a.pop_back();
    cout << a.back() << endl; /// 4


    a = { 3, 4, 5, 1, 2 };
    cout << *a.begin()  << endl; /// 3

     a.erase( a.begin() );
    for ( auto u : a ) cout << u << " "; /// 4 5 1 2
    cout << endl;


    a.erase( a.begin()+2 );
    for ( auto u : a ) cout << u << " "; /// 4 5 2
    cout << endl;


   a = { 1, 1, 2, 2, 2, 3, 3 ,5,5,5 };
    unique( a.begin(), a.end() );

     for ( auto u : a ) cout << u << " ";
    cout << endl;




    a = { 1, 1, 2, 2, 2, 3, 3 };
    int n = unique( a.begin(), a.end() ) - a.begin();

    cout << n << endl; /// 3
    for ( int i = 0; i < n; i++ ) cout << a[i] << " "; /// 1 2 3
    cout << endl;




    a = { 2, 3, 1, 5 };
    cout << max_element( a.begin(), a.end() ) - a.begin() << endl; /// 3
    cout << *max_element( a.begin(), a.end() ) << endl; /// 5







return 0;
}



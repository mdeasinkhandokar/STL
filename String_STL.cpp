#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int
#define optimize() ios_base ::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){

optimize();

	string s = "asdf";
    s.pop_back(); /// removes last char of string
	cout << s.back() << endl; /// print last char of string


    vector<string> v;
	v = { "Shahriar", "Shahriar", "Momo", "Momo", "Sharif", "Sharif" };
	int Sz = unique ( v.begin(), v.end() ) - v.begin();

	cout << Sz << endl; /// Number of unique strings in vector v;

    for ( int i = 0; i < Sz; i++ ) cout << v[i] << endl; /// Prints all unique strings in vector v



    /// Converting int to string
	int a = 123;
	s = to_string (a);
	cout << s << endl; /// 123
	s[0] = '3';
	cout << s << endl; /// 323




    /// Converting string to integer

	s = "123";
	a = stoi ( s );
	cout << a << endl; /// 123
	a++;
	cout << a << endl; /// 124;




    /// Deleting a substring from string

	s = "ShaKAKAhriar";

	s.erase ( s.begin()+3, s.begin()+7 ); /// erase substring "KAKA" from string s
	cout << s << endl;



    /// Copying a substring of a string to a string
	string tmp = "Gagha Alam Gadha";
	s = "Shahriar ";




	copy ( tmp.begin()+6, tmp.begin()+10, back_inserter ( s ) ); /// copying "Alam substring to string s back.
	cout << s << endl; /// Shahriar Alam



	/// Erasing all occurrence of a specific char from string.

	s = "aaassdddaaasdd";
	s.erase ( remove ( s.begin(), s.end(), 'a' ), s.end() ); /// removes all 'a' from s
	cout << s << endl;



    /// Checking is a string is substring of another string in O(n*m)
	s = "ashshasdakks";

	if ( s.find( "asd" ) != -1 ) cout << "Substring found";
	else cout << "Not found";







return 0;
}


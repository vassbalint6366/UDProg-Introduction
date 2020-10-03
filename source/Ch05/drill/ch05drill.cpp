#include "std_lib_facilities.h"
int main()
try{
	//cout << "Success!\n"; //kész
	
	//cout << "Success!\n"; //kész

	//cout << "Success" << "!\n"; //kész
	
	//cout << "success" << '\n'; //kész

	//int res = 7; vector<int> v(10); v[5]  = res; cout << "Success!\n"; //kész

	//vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";

	//if (cout) cout << "Success!\n"; else cout << "Fail!\n"; //kész
	
	//bool c = false; if (c==0) cout << "Success!\n"; else cout << "Fail!\n"; //kész
	
	//string s = "ape"; string c = "fool"; if (c!=s) cout << "Success!\n"; //kész

	//string s = "ape"; if (s=="ape") cout << "Success!\n"; //kész
	
	//string s = "ape"; if (s=="ape") cout << "Success!\n"; //kész
	
	//string s = "fool"; if (s=="fool") cout << "Success!\n"; //kész
	
	//vector<int> v(5); for (int i=0; i<v.size(); ++i); cout << "Success!\n"; //kész
	
	//vector<int> v(5); for (int i=0; i<v.size(); ++i); cout << "Success!\n"; //kész
	
	//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; //kész
	
	//if (true) cout << "Success!\n"; else cout << "Fail!\n"; //kész
	
	//int x = 2000; int c = x; if (c==2000) cout << "Success!\n"; //kész
	
	//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; //kész
	
	//vector <int> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n"; //kész
	
	//int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n"; //kész
	
	//int x = 3; double d = 5/(x-2); if (d!=2*x+0.5) cout << "Success!\n"; //kész
	
	//string s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i]; //kész
	
	//int i=0, j=9; while (i<10) ++i; if (j<i) cout << "Success!\n"; //kész
	
	//int x = 4; double d = 5/(x-2); if (d!=2*x+0.5) cout << "Success!\n"; //kész
	
	//cout << "Success!\n"; //kész



	return 0;
} catch (exception& e) {
	cerr << "error: " << e.what() << endl;
	return 1;
} catch (...) {
	cerr << "Unknown exception\n";
	return 2;
}
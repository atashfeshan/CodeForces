#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	string a;
	cin>>a;
	a[0] = tolower(a[0]);
	a[0] -= 32;
	cout<<a;
	return 0;
}

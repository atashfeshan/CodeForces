#include<bits/stdc++.h>

using namespace std;
#define REP(i, a, b) for(int i = a; i<=b; i++)

vector<char> temp;
int main()
{
	string s;
	cin>>s;
	int n = (int)s.size();
	REP(i, 0, n-1)
	{
		if(i%2 == 0) temp.push_back(s[i]);
	}
	sort(temp.begin(), temp.end());
	n =(int)temp.size();
	REP(i,0,n-1)
	{	
		if(i == (n-1)) cout<<temp[i];
		else cout<<temp[i]<<'+';
	}
	return 0;
}

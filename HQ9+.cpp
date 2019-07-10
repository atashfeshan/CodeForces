#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i =a;i<b; i++)
const int MX = 2e5 + 3;

int main()
{	
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s;
	cin>>s;
	int n = (int) s.size(), mark = 0;
	REP(i , 0, n)
	{
		if(s[i] == 'Q' || s[i] == 'H' || s[i] == '9'){ mark = 1;
		break;}
	}
	if(mark == 1) cout<<"YES"; 
	else cout<<"NO";
	return 0;
}

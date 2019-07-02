#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(int i =a;i<=b; i++)
const int MX = 2e5 + 3;

int main()
{	
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string a;
	set<char> s;
	cin>>a;
	for(auto x:a) s.insert(x);
	if(s.size()%2==1) cout<<"IGNORE HIM!";
	else cout<<"CHAT WITH HER!";
	return 0;
}

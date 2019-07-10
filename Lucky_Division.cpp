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

int a, mark= 0;

void all(string g);
int main()
{	
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>a;
	all("0");
	if(mark == 1)
		cout<<"YES";
	else
		cout<<"NO";	
	return 0;
}

void all(string g)
{
	int temp = atoi(g.c_str());
	if(temp != 0)
	{
		if(a%temp == 0) mark = 1;	
	}
	if(mark != 1 && temp < a)
	{
		all(g+"4");
		all(g+"7");
	}
}

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
	int n, sum = 0, get = 0, coin = 0;
	cin>>n;
	int s[n];
	REP(i, 0, n)
	{
		cin>>s[i];
		sum += s[i];
	}
	sort(s, s+n);
	int i = n-1;
	while(get <= sum)
	{
		get += s[i];
		sum -= s[i];
		i--;
		coin ++;
	}
	cout<<coin;
	return 0;
}

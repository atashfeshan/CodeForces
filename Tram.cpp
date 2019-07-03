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
	int n, temp=0;
	int x, y;
	int best=0;
	cin>>n;
	REP(i,0, n-1)
	{
		cin>>x>>y;
		temp += (y-x);
		best = max(best, temp);
	}
	cout<<best;
	return 0;
}

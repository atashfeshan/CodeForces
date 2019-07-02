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
	int temp;
	int x=0, y=0;
	REP(i, 0, 4)
	{
		REP(j,0 ,4)
		{
			cin>>temp;
			if(temp == 1) x=i, y= j; 	
		}
	}
	cout<<abs(x-2) + abs(y-2);
	return 0;
}

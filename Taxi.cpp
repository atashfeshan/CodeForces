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
	int n, count[5] = {0, 0, 0, 0, 0}, temp, total=0;
	cin>>n;	
	REP(i, 1, n)
	{
		cin>>temp;
		count[temp]++;
	}
	total += (count[2]/2) + count[3] + count[4];
	count[1] -= count[3];
	if(count[2]%2 == 1)
	{
		total++;
		count[1]-=2;
	}
	if(count[1]>0)
	{
		total += (count[1]+3) / 4;
	}
	cout<<total;
	return 0;
}

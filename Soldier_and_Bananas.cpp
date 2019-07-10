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
	int k, n, w;
	cin>>k>>n>>w;
	int temp = (w*(w+1)/2*k) - n;
	if (temp>0) cout<<temp;
	else cout<<0;
	return 0;
}

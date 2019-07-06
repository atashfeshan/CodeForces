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
	string a, b= "hello";
	cin >> a;
	int temp = 0;
	REP(i , 0, (int)a.size()-1)
	{
		if(a[i] == b[temp]) temp++;
		if(temp == 5) break;
	}
	if(temp == 5) cout<<"YES";
	else cout<<"NO";
	return 0;
}

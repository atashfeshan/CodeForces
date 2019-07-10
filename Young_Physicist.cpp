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
	int n;
	int a=0, b=0, c=0;
	int temp1, temp2, temp3;
	cin>>n;
	REP(i, 0, n-1)
	{
		cin>>temp1>>temp2>>temp3;
		a+=temp1; b+=temp2; c+=temp3;
	}
	if(a == 0 && b == 0 && c==0)
	{
		cout<<"YES";
	} 
	else
		cout<<"NO";
	return 0;
}

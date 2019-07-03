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
	int n, taxi = 0, one=0, two =0, three =0, temp;
	cin>>n;
	REP(i, 0, n-1)
	{
		cin>>temp;
		if(temp==4) taxi++;
		else if(temp == 3) three ++;
		else if(temp == 2) two++;
		else one ++;
	}
	taxi += two / 2;
	two = two % 2;
	temp =  min(three, one);
	three -= temp;
	one -= temp;
	taxi += temp;
	taxi += three;
	taxi += one / 4;
	if(two == 1) taxi += two;
	else if(one%4 != 0) taxi++;
	cout<<taxi;
	return 0;
}

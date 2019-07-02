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

string remove(string s, int c);
int main()
{	
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n, m=0;
	char temp;
	string s;
	cin>>n>>s;
	temp = s[0];
	int i = 1;
	while(i <= (int)s.size())
	{
		if(i >= (int)s.size()) break;
		if(temp == s[i])
		{
			s = remove(s, i);
			m++;
		}
		else temp=s[i], i++;	
	}
	cout<<m;
	return 0;
}

string remove(string s, int c)
{
	string temp1, temp2;
	temp1=s.substr(0,c);
	temp2 = s.substr(c+1, s.size()-1);
	return (temp1+temp2);
}

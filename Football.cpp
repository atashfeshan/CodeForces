// in the name of god
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int temp=1, mark=0, last;
	string a;
	cin>>a;
	last = a[0];
	for(int i = 1; i< (int)a.size(); i++)
	{
		if(a[i] == last) temp++;
		else temp = 1, last = a[i];
		if(temp>=7)
		{ 
		mark = 1; 
		break;
		}
	}				
	if(mark)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}

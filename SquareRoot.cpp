#include <iostream>
#include <queue>
#include <map>
#include <utility>
#include <climits>
#include <stack>
#include <stdlib.h>
#include <stdio.h>

#define ll long long int 
#define er(X) cout<<"error"<<X
#define mp(X,Y) make_pair(X,Y)

using namespace std;

int SquareRoot(int x)
{
	int l,h,m,ans;
	if(x==0 || x==1)
		return x;
	l=1;
	h=x;
	while(l<h)
	{
		m=(l+h)/2;
		if(m*m==x)
			return m;
		else if(m*m<x)
		{
			l=m+1;
			ans=m;
		}
		else if(x<m*m)
		{
			h=m-1;
		}
	}
	return ans;
}

int main()
{
	int x;
	while(cin>>x)
		cout<<SquareRoot(x)<<endl;
	return 0;
}
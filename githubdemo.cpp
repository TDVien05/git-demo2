#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9 + 7;

set<int> se;
bool check(int n)
{
	int sum = 0, tmp = n;
	while(n)
	{
		int t = n % 10;
		sum = sum * 10 + t;
		n /= 10;
	}
	return sum == tmp;
}

bool uoc(int n)
{
	for(int i=2; i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			{
				n/=i;
				se.insert(i);
			}
		}
	}
	return se.size()>=3;
}
void hello();
void goodbye();
int main()
{
	int a, b;
	cin >> a >> b;
	bool ok = 0;
	for(int i=a; i<=b; i++)
	{
		if(check(i) && uoc(i)) 
		{
			cout << i << " ";
			ok = 1;
		}
	}
	if(!ok) cout << -1;
}

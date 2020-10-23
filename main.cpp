#include <bits/stdc++.h>
#define ll  long long int
#define N 1000000
#define M 1000000007
#define f(i,a,b) for(ll i=(ll)a;i<=(ll)b;i++)
#define rf(i,a,b) for(ll i=(ll)a;i>=(ll)b;i--)
#define po pop_back
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define ibs ios_base::sync_with_stdio(false);
#define cti cin.tie(0);
#define cot cout.tie(0);
using namespace std;
/**
  * @author :: Rishabh
  *
  */
int main()
{
	ibs;
	cti;
	ll n;
	cin>>n;
	ll *a=new ll[n];
	ll *b=new ll[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	for(ll i=0;i<n;i++)
	cin>>b[i];
	ll *k=new ll[n];
	for(ll i=0;i<n;i++)
	{
	k[i]=b[i]/a[i];
	}
	ll *a1=min_element(k,k+n);
	cout<<*a1<<"\n";
	return 0;

}
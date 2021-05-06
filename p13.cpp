#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
#define ll          long long
#define pb          push_back
#define INF         9223372036854775807ll
#define	endl		'\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)	for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define lower(u)    transform(u.begin(), u.end(), u.begin(), ::tolower);//convert string u to lowercase;
#define upper(u)    transform(u.begin(), u.end(), u.begin(), ::toupper);
#define time        cerr << "\nTime elapsed: " << 1000 * clock() / CLOCKS_PER_SEC << "ms\n";
using namespace std;

using namespace __gnu_pbds; 
  
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define N  100005

void solve()
{
	vector<string>v(100);
	rep(i,0,100)
	{
		cin>>v[i];
	}
	string ans;
	ll carry=0;
	rep(i,0,50)
	{
		ll k=49-i;
		rep(j,0,100)
		{
			carry+=v[j][k]-'0';
		}
		ans=to_string('0'+(carry%10))+ans;
		carry/=10;
	}
	if(carry!=0)
	ans=to_string(carry)+ans;
	ll res=0;
	rep(i,0,10)
	{
		res+=ans[i]-'0';
	}
	cout<<res<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
	int TESTS=1;
//	cin>>TESTS;
	while(TESTS--)
	{
		solve();
	}
	time
	return 0;
}
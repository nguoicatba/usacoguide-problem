#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FORR(i,a,b) for(int i=a;i>=b;--i)
using namespace std;
#define ll long long
typedef vector<int> vi;
typedef vector<long long> vll;
typedef map<int,int> mapii;
#define pb push_back 
#define all(x) x.begin(),x.end()
#define maxn
#define endl "\n"
#define NO cout<<"NO"<<endl
#define YES cout<<"YES"<<endl

#define writefile(f) freopen (f,"r",stdin)
#define readfile(f)  freopen(f,"w",stdout)
void solve(){

}
 ll a[10001][1010];
 ll dp[10001];
int main ()
{ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(0);
  writefile("teamwork.in");
  readfile("teamwork.out");
ll n,k;
cin>>n>>k;
vector<ll>ap(n+1);
for (int i=1;i<=n;++i)
cin>>ap[i];
memset(dp,0,sizeof(dp));
memset(a,0,sizeof(a));
for (int i=1;i<=n;++i){
  for (int j=1;j<=k;++j){
    if (i-j<0)
      continue;
    a[i][j]=max(ap[i],a[i-1][j-1]);
    dp[i]=max(dp[i],dp[i-j]+j*a[i][j]);
  }
}
cout<<dp[n];
}

//A
#include <bits/stdc++.h>

// GCC Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")

using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define lint 				   long long int
#define loop(i, j, k, in) 	for(int i=j ; i<k ; i+=in)
#define rloop(i, j, k, in) 	for (int i=j ; i>=k ; i-=in)
#define fo(i, j) 			  loop(i, 0, j, 1)
#define rfo(i, j) 			rloop(i, j, 0, 1)
#define all(cont) 			cont.begin(), cont.end()
#define rall(cont) 			cont.end(), cont.begin()
#define mp 					    make_pair
#define pb 					    push_back
#define PI 					    3.1415926535897932384626433832795
#define MOD 				    1000000007
#define max3(a,b,c) 		max(max((a),(b)),(c))
#define max4(a,b,c,d) 	max(max((a),(b)),max((c),(d)))
#define min3(a,b,c) 		min(min((a),(b)),(c))
#define min4(a,b,c,d) 	min(min((a),(b)),min((c),(d)))
#define yes             cout<<"Yes"<<endl;
#define no              cout<<"No"<<endl;
#define YES             cout<<"YES"<<endl;
#define NO              cout<<"NO"<<endl;
#define print(x)        cout<<(x)<<endl;
typedef pair<int, int>  pii;
typedef vector<int> 		vi;
typedef vector<string> 	vs;
typedef vector<pii> 		vii;
typedef vector<vi> 			vvi;
typedef map<int, int>		mpii;
//typedef set<int> 			seti;

// Recursive function to return gcd of a and b
long long gcd(lint a, lint b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
// Bitwise operations
int Set(int qq , int pos){return (qq|(1<<pos));}
int chk(int qq , int pos){return (qq&(1<<pos));}
int p2(int idx){return ((1LL<<idx));};

// Maths//Modular exponential
int modpow(int x, int n, int m)
{
   if (n == 0) return 1%m;
   int u = modpow(x,n/2,m);
   u = (u*u)%m;
   if (n%2 == 1) u = (u*x)%m;
   return u;
}
int _pow(int a, int b)
{
   if(!b)return 1;
   lint temp = _pow(a, b/2);
   temp = (temp * temp);
   if(b%2)return (a * temp);
   return temp;
}
int ceil(int a, int b)
{
  if(a%b)
    return 1 + a/b;
  return a/b;
}


void solve()
{

  lint n,m,c=0,d=0;
  cin>>n>>m;
	int a[n];
    char s[m];
	fo(i,n){
	cin>>a[i];
    }
    fo(i,m){
	s[i]='B';
    }
	fo(i,n)
    {
        if(a[i]-1<=m+1-a[i]-1)
            if(s[a[i]-1]=='B') s[a[i]-1]='A';
            else s[m+1-a[i]-1]='A';
        else
        {
            if(s[m+1-a[i]-1]=='B') s[m+1-a[i]-1]='A';
            else s[a[i]-1]='A';
        }
    }
    fo(i,m)
	cout<<s[i];

}
int main()
{
  IOS
	int t;
	cin >> t;

	while (t--)
	{
		solve();
		cout << "\n";
	}

	return 0;
}

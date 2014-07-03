#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int pow(int a,int b,int MOD)
{
    int x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}

int InverseEuler(int n,int MOD)
{
    return pow(n,MOD-2,MOD);
}
int C(int n, int r,int MOD)
{
    return (n*(InverseEuler(r, MOD)) % MOD) % MOD;
}
int main()
{
    int t;
    long long int MAX = 1000000007;
    vector <int> f(1000001);
    f[1] = 2;
    for(int i=2;i<=1000000;i++)
    {
        int yo = f[i-1]*2*(2*i-1);
        f[i] = C(yo,i,MAX);
    }
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int yo = (f[n]*n);
        int ans = C(yo,2,MAX);
        printf("%d\n",ans);
    }
    return 0;
}

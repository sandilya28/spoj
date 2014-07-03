#include <cstdio>
#include <vector>
using namespace std;
vector<long long int> f(1000001,1);
long long int pow(long long int a, long long int b, long long int MOD)
{
    long long int x=1,y=a;
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

/*  Modular Multiplicative Inverse
    Using Euler's Theorem
    a^(phi(m)) = 1 (mod m)
    a^(-1) = a^(m-2) (mod m) */
long long int InverseEuler(long long int n, long long int MOD)
{
    return pow(n,MOD-2,MOD);
}

long long int C(long long int n, long long int r, long long int MOD)
{
    return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}

int main()
{
    long long int mod = 1000000007;
    f[1]=1;
    for (int i=2; i<=1000000;i++)
        f[i]= (f[i-1]*i) % mod;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        long long int ans;
        scanf("%lld",&n);
        ans = C(2*n,n,mod);
        ans = ((n*ans)/2)%mod;
        printf("%lld\n",ans);
    }
    return 0;
}

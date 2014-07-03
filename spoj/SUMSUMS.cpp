#include <cstdio>
using namespace std;
int main()
{
    int n;
    long long int t,sum=0,mod = 98765431;
    long long int c[50000];
    scanf("%d%lld",&n,&t);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&c[i]);
        sum=(sum + c[i])%mod;
    }
    for(int i=0;i<t;i++)
    {
        sum = (sum*(n-1))%mod;
        printf("sum:%lld\n",sum);
    }
//    printf("sum:%lld\n",sum);
    long long int yo=0;
    if(int i=0;i<n;i++)
    {
        yo += (sum/n);
    }
    if(yo-sum)

    if(t%2!=0)
    {
        for(int i=0;i<n;i++)
        {
            long long int ans = ((sum/n)-c[i])%mod;
            printf("%lld\n",ans);
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            long long int ans = ((sum/n)+c[i])%mod;
            printf("%lld\n",ans);
        }
    }
    return 0;
}

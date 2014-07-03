#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,ans;
        scanf("%lld",&n);
        ans = n;
        ans *= n+1;
        ans /= 6;
        printf("%lld\n",ans);
    }
}

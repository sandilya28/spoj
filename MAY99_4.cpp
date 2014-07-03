#include <cstdio>
using namespace std;
int MAX = 10000007;
int main()
{
    int n,r;
    scanf("%d%d",&n,&r);
    if(n<r)
        printf("-1\n");
    else if(n==r || r==1)
        printf("1\n");
    else
    {
        unsigned long long int ans=1;
        int p = 1;
        while(p<=n-r)
        {
            ans = ans*(n-r-p+2)/p;
            p++;
        }
        printf("%d\n",ans%MAX);
    }
    return 0;
}

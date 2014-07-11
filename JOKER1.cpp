#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
long long int MOD = 1000000007;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,ans=1;
        scanf("%lld",&n);
        vector <int> maxnumber(n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&maxnumber[i]);
        }
        sort(maxnumber.begin(),maxnumber.end());
        for(int i=0;i<n;i++)
        {
            ans = (ans * (maxnumber[i]-i))%MOD;
        }
        printf("%lld\n",ans);
    }
    printf("KILL BATMAN\n");
    return 0;
}

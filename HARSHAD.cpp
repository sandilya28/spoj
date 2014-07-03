#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    vector <int> d(1000001,0),check(1000001,0),p(1000001,0);
    int limit = sqrt(1000000);
    p[1]=1;
    p[0]=1;
    for(int i=2;i<=limit;i++)
    {
        if(p[i]==0)
        {
            int yo = 2;
            int j = yo*i;
            while(j<=1000000)
            {
                p[j]=1;
                yo++;
                j = yo*i;
            }
        }
    }
    for(int i=0;i<=1000000;i++)
    {
        int sum=i;
        int yo = i;
        while(yo!=0)
        {
            sum+=(yo%10);
            yo = yo/10;
        }
        if(sum<=1000000)
            d[sum]=1;
    }
    check[0] = 0;
    for(int i=1;i<=1000000;i++)
    {
        if(d[i]==0 && p[i]==0)
        {
            check[i] = check[i-1] + 1;
        }
        else
            check[i] = check[i-1];
    }
    int q,a,b,ans;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d%d",&a,&b);
        if(a!=0)
        {
            if(check[a]!=check[a-1])
                ans = check[b]-check[a]+1;
            else
                ans = check[b]-check[a];
        }
        else
            ans = check[b];

        printf("%d\n",ans);
    }
    return 0;
}

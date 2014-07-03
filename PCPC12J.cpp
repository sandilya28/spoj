#include <cstdio>
#include <vector>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,scan,D=-1,f=-1;
        scanf("%d",&n);
        vector <int> a(101,0);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&scan);
            a[scan]++;
        }
        for(int i=1;i<=100;i++)
        {
            if(a[i]==0)
                continue;
            if(a[i]>f && a[i]%i==0)
            {
                f = a[i];
                D = i;
            }
        }
        printf("%d\n",D);
    }
    return 0;
}

#include <cstdio>
using namespace std;
int main()
{
    int  t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        double ans;
        ans = 1.0/n;
        ans+=2;
        printf("%.8lf\n",ans);
    }
    return 0;
}

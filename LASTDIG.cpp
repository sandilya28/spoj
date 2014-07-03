#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        int mod1 = a%10,mod2=b%4,mod3=b%2;
        if(b==0)
        {
            printf("1\n");
            continue;
        }
        if(mod1==0||mod1==1||mod1==5||mod1==6)
            printf("%d\n",mod1);
        else if(mod1==2||mod1==3||mod1==7||mod1==8)
        {
            printf("%d\n",(int)pow(mod1,4+mod2)%10);
        }
        else if(mod1==4||mod1==9)
        {
            printf("%d\n",(int)pow(mod1,2+mod3)%10);
        }
    }
    return 0;
}

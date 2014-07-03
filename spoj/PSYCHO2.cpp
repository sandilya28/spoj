#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
    int limit = 3164,size=0;
    vector <bool> prime(3164,1);
    vector <int> p;

    for (int i = 0; i < 3164; i++)
    {
        prime[i] = 1;
    }
    prime[0] = 0;
    prime[1] = 0;
    for(int i=2;i<limit;i++)
    {
        if(prime[i])
        {
            int j = 2*i;
            while(j<=limit)
            {
                prime[j]=0;
                j+=i;
            }
        }
    }
    for(int i=2;i<limit;i++)
    {
        if(prime[i])
        {
            p.push_back(i);
            size++;
        }
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k,b,m,zero=0,lastdig=0,mod1,mod2,mod3,e=0,o=0;
        long long int p1;
        scanf("%d%d%lld",&k,&b,&p1);
//        printf("%d %d %lld",k,b,p1);
        vector <int> cnt(6,0);
        for(int i=2;i<=k;i++)
        {
            int n = i;
            while(n%2==0)
            {
                cnt[2]++;
                n=n/2;
            }
            while(n%5==0)
            {
                cnt[5]++;
                n=n/2;
            }
        }
//        printf("2 : %d 5 : %d\n",cnt[2],cnt[5]);
        if(cnt[2]>cnt[5])
        {
            zero = cnt[5];
        }
        else
        {
            zero = cnt[2];
        }
        mod1 = b%10;
        mod2 = p1%4;
        mod3 = p1%2;
        if(mod1==0||mod1==1||mod1==5||mod1==6)
        {
            if(p1!=0)
                lastdig = mod1;
            else
                lastdig = 1;
        }
        else if(mod1==4||mod1==9)
        {
            if(p1!=0)
            {
                lastdig = ((int)pow(mod1,mod3+2))%10;
            }
            else
                lastdig = 1;
        }
        else
        {
            if(p1!=0)
                lastdig = ((int)pow(mod1,4+mod2))%10;
            else
                lastdig=1;
        }
//        printf("zero : %d lastdig : %d\n",zero,lastdig);
        int num = lastdig * zero;
//        int limit = sqrt(num);
//        for(int i=0;i<=limit;i++)
//        {
//
//        }
//        printf("N : %d\n",num);
        int x = num;
        for(int i=0;i<size;i++)
        {
            int yolo = 0;
            if(x%p[i]==0)
            {
                while(x%p[i]==0)
                {
                    x=x/p[i];
                    yolo++;
                    if(x==0||x==1)
                        break;
                }
                if(yolo%2 ==0)
                    e++;
                else
                    o++;
                if(x==0||x==1)
                    break;
                yolo=0;
            }
        }
        if(x>1)
            o++;
        if(e>o)
            printf("Psycho Number\n");
        else
            printf("Ordinary Number\n");
    }
    return 0;
}

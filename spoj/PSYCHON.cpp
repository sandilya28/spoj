#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;
int MAX = 10000000;
vector <bool> prime(MAX+1,1);
vector <int> p;
int main()
{
    int limit = sqrt(MAX),size=0;
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
        int n;
        int e=0,o=0;
        scanf("%d",&n);
        int x = n;
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

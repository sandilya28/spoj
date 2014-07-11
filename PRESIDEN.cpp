#include <cstdio>
#include <vector>
#include <map>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int c,v,scan;
        scanf("%d%d",&c,&v);
        map<int,vector<int> > ranks;
        int votes [101]={0};
        for(int i=1;i<=v;i++)
        {
            for(int j=0;j<=c;j++)
            {
                ranks[i].push_back(0);
            }
        }
        for(int i=1;i<=v;i++)
        {
            for(int j=1;j<=c;j++)
            {
                scanf("%d",&scan);
                ranks[i].at(scan)=j;
                if(j==1)
                {
                    votes[scan]++;
                }
            }
        }
        int max1=-1,max2=-1,pos1=0,pos2=0,yo1=0,yo2=0;
        for(int i=1;i<=c;i++)
        {
            if(max1<votes[i])
            {
                max2 = max1;
                pos2 = pos1;
                max1 = votes[i];
                pos1 = i;
            }
            else if(max2<votes[i])
            {
                max2 = votes[i];
                pos2 = i;
            }
        }
        if(max1>v/2)
        {
            printf("%d 1\n",pos1);
        }
        else
        {
            for(int i=1;i<=v;i++)
            {
                if(ranks[i].at(pos1)<ranks[i].at(pos2))
                {
                    yo1++;
                }
                else
                {
                    yo2++;
                }
            }
            if(yo1>yo2)
            {
                printf("%d 2\n",pos1);
            }
            else
            {
                printf("%d 2\n",pos2);
            }
        }
    }
    return 0;
}

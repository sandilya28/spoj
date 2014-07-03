#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <string>
using namespace std;
int main()
{
    int m,n;
    string s;
    while(true)
    {
        scanf("%d%d",&n,&m);
        getchar();
        if(n==0&&m==0)
            break;
        vector<vector <int> > a (n,vector <int>(n));
        map <string,int> b;
        vector <int> cnt(n,1);
        for(int i=0;i<n;i++)
        {
            cin>>s;
            b[s] = i;
            for(int j=0;j<n;j++)
            {
                a[i].at(j)=0;
            }
            a[i].at(i) = 1;
        }
//        map<int,vector<int> >::iterator it;
//        for(it = a.begin();it!=a.end();it++)
//        {
//            printf("%d ---> ",it->first);
//            for(int i=0;i<n;i++)
//            {
//                printf("%d ",it->second.at(i));
//            }
//            printf("\n");
//        }
        for(int i=0;i<m;i++)
        {
            string s1,s2;
            cin>>s1>>s2;
            int i1 = b[s1];
            int i2 = b[s2];
            for(int j=0;j<n;j++)
            {
                if(a[i1].at(j)==0&&a[i2].at(j)==1)
                {
                    cnt[i1]++;
                    a[i1].at(j)=1;
                }
                else if(a[i1].at(j)==1&&a[i2].at(j)==0)
                {
                    cnt[i2]++;
                    a[i2].at(j)=1;
                }
            }
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(cnt[i]!=n)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

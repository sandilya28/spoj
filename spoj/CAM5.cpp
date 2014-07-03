#include <iostream>
#include <cstdio>
#include <vector>
#include <map>

using namespace std;

map <int, vector<int> > a;
map<int,int> p;

void func(vector <int> *b,int n,int n1)
{
    if(*(b+n)==1)
        return;
    for(int i=0;i<a[n].size();i++)
    {
        func(*b,a[n].at(i),n1);
        *(b+a[n].at(i))=1;
        p[a[n].at(i)]=n1;
    }
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e,s1,s2;
        cin>>n>>e;
        vector <int> b(n);
        for(int i=0;i<e;i++)
        {
            scanf("%d%d",&s1,&s2);
            a[s1].push_back(s2);
            a[s2].push_back(s1);
        }
        int cnt =1;
        for(map<int, vector<int> >::iterator it = a.begin();it!=a.end();it++)
        {
            if(b[it->first]==0)
            {
                int size = it->second.size();

                for(int i=0;i<size;i++)
                {
                    func(&b,it->first,it->first);    //func(b,b[])
                }
            }
        }
        for(map<int,int>::iterator it = p.begin;it!=p.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
    }
    return 0;
}

#include <iostream>
#include <map>
using namespace std;
int main()
{
    int N;
    cin>>N;
    map <int , vector <int> > m;
    for(int i=1;i<=N-3;i++)
    {
        for(int j=1;j<=N-3;j++)
        {
            if(i+j<=N-1)
            {
                    val = (i+j)*(i+j)-2*(i*j+N*i+N*j)+N*N;
                    m[val].push_back(i);
                    m[val].push_back(j);
            }
        }
    }
    map <int,vector<int> >::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second.size()>=8)
        {

        }
    }
    return 0;
}

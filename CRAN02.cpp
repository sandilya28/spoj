#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,ans=0;
        cin>>n;
        vector <long long int> a(n),sum(n,0);
        map <long long int, vector<long long int> > m;
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
            if(i==0)
                sum[i] = a[i];
            else
                sum[i] = sum[i-1]+a[i];
            m[sum[i]].push_back(i);
        }
        for( map<long long int,vector<long long int> >::iterator it = m.begin();it!=m.end();it++)
        {
                long long int size = it->second.size();
                if(it->first!=0)
                {

                    if(size!= 1)
                    {
                        ans += (size*(size-1)/2);
                    }
                }
                else
                {
                    ans+= size;
                    ans+= (size*(size-1)/2);
                }
        }
        cout<<ans<<endl;
    }
    return 0;
}

#include<iostream>
#include <vector>
using namespace std;

int findpower(long long int n)
{
    long long int yo = 1,cnt=0;
    while(yo<=n)
    {
        yo *= 5;
        cnt++;
    }
    return cnt-1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char result[5] = {'u','m','a','n','k'};
        long long int n;
        cin>>n;
        int pow;
        vector <int> v;
        long long int hi = n;
        long long int yo =5;
            while(hi!=0)
            {
                v.push_back(hi%yo);
                if(hi%yo==0)
                    hi = hi/yo - 1;
                else
                    hi = hi/yo;
            }

        long long int size = v.size();
        for(int i=size-1;i>=0;i--)
        {
            cout<<result[v[i]];
        }
        cout<<endl;
    }
    return 0;
}

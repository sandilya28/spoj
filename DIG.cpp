#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int M  = 24*1000000007L;
        long long int n,ans;
        cin>>n;
        long long int x = (n*(n-1))%M;
        long long int y = (x*(n-2))%M;
        long long int z = (y*(n-3))%M;
        ans = z/24;
        cout<<ans<<endl;
    }
    return 0;
}

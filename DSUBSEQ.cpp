#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    const long long int m = 1000000007;
    while(t--)
    {
        char a[100001];
        int n;
        scanf("%s",a+1);
        n = strlen(a);
        vector <int> dp(n);
        vector <int> sum(n);
        map <char,int> last;
        dp[0] = 1;
        sum[0] = 1;
        for(int i=1;i<=n;i++)
        {
            if(last[a[i]])
                dp[i] = sum[i-1] - sum[last[a[i]] - 1];
            else
                dp[i] = sum[i-1];
            if(dp[i]<0) dp[i] + m;
            else if(dp[i]>=m) dp[i]-=m;
            sum[i] = sum[i-1] + dp[i];
            last[a[i]] = i;
        }
        cout<<sum[n];
    }
    return 0;
}

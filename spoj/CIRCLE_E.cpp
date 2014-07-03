#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int r1,r2,r3;
        scanf("%d%d%d",&r1,&r2,&r3);
        double r = r1*r2*r3/(r1*r2+r2*r3+r3*r1+2*sqrt(r1*r2*r3*(r1+r2+r3)))*1.0;
        printf("%.6lf\n",r);
    }
    return 0;
}

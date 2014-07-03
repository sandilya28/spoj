#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;
int main()
{
    int t;
    int r,N;
    cin>>r>>N;
    while(N!=0){
    double R ;
    R = r/sin(acos(-1)*0.5/N);
    printf("%.2f\n",R);
    cin>>r>>N;
    }
    return 0;
}

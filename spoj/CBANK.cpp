#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        for(int x=0;x<=(int)4*n;x++)
        {
            cout<<"a"<<endl;
            for(int y=0;y<=(int)2*n;y++)
            {
                cout<<"b"<<endl;
                for(int z=0;z<=(int)n;y++)
                {
                    cout<<"c"<<endl;
                    for(int w=0;w<=(int)n/2;w++)
                    {
                        cout<<"d"<<endl;
                        if(x+2*y+4*z+8*w==4*n)
                        {
                            ans++;
                        }
                    }
                }
            }
        }
        cout<<ans;
    }
    return 0;
}

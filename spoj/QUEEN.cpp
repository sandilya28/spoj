#include <cstdio>
#include <vector>

using namespace std;

vector < vector <char> > a(30,vector <char>(30));
vector < vector <int> > ans(30,vector <int>(30));
vector < vector <int> > flag(30 ,vector<int>(30));
int n;
void dist(int x ,int y)
{
    if(a[x][y]=='T')
        return;
    if(x>=n || y>=n)
      return;
    if(x<0 || y< 0)
      return;
    if(flag[x][y]>30)
      return;
    if(x<n && y+1<n && x>=0 && y+1 >=0)
    {
        if((ans[x][y]+1 < ans[x][y+1]) && a[x][y+1]!='T' && flag[x][y+1]<=30)
        {
            ans[x][y+1] = ans[x][y]+1;
        }
        //dist(x,y+1);
    }
    if( x<n && y-1<n && x>=0 && y-1 >=0)
    {
        if((ans[x][y]+1 < ans[x][y-1]) && a[x][y-1]!='T' && flag[x][y-1]<=30)
        {
            ans[x][y-1] = ans[x][y]+1;
        }
        //dist(x,y-1);
    }
    if( x+1<n && y<n &&  x+1>=0 && y >=0)
    {
        if((ans[x][y]+1 < ans[x+1][y]) && a[x+1][y]!='T'&& flag[x+1][y]<=30)
        {
            ans[x+1][y] = ans[x][y]+1;
        }
        //dist(x+1,y);
    }
    if( x-1<n && y<n && x-1>=0 && y >=0)
    {
        if((ans[x][y]+1 < ans[x-1][y]) && a[x-1][y]!='T' && flag[x-1][y]<=30)
        {
            ans[x-1][y] = ans[x][y]+1;
        }
        //dist(x-1,y);
    }
    flag[x][y]++;

    if(x<n && y+1<n && x>=0 && y+1 >=0 && flag[x][y+1]<=30)
      dist(x,y+1);
    if(x<n && y-1<n && x>=0 && y-1 >=0 && flag[x][y-1]<=30)
      dist(x,y-1);
    if(x+1<n && y<n && x+1>=0 && y >=0 && flag[x+1][y]<=30)
      dist(x+1,y);
    if(x-1<n && y<n && x-1>=0 && y >=0 && flag[x-1][y]<=30)
      dist(x-1,y);
}

int main()
{

    int x=0,y=0,sx,sy,dx,dy;
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans[i][j]=10000;
            flag[i][j]=0;
        }
    }
    char c;
    while(x<n)
    {
        c=getchar();
        if(c=='S'||c=='E'||c=='T'||c=='P')
        {
            a[x][y]=c;
            if(c=='S')
            {
                sx = x;
                sy = y;
            }
            else if(c=='E')
            {
                dx = x;
                dy = y;
            }
            y++;
        }
        if(x==n-1 && y==n)
        {
            break;
        }
        else if(c=='\n')
        {
            x++;
            y = 0;
        }
    }
    //printf("%d %d %d %d\n",sx,sy,dx,dy);
    ans[sx][sy]=0;
    dist(sx,sy);
    printf("%d\n",ans[dx][dy]);
    return 0;
}

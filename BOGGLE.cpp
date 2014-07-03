#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <cstdio>

using namespace std;

int main() {
	int n;
	cin>>n;
	getchar();
	map< string , vector<int> > a;
	vector <int> ans(n,0);
	char c;
	for(int i=0;i<n;i++)
	{
		int flag = 0;
		while(true)
		{
			string st;
			while(true)
			{
				c=getchar();
				if(c!=' ' && c!= '\n'&&c!=EOF)
					st+=c;
				else if(c==' ')
					break;
				else if(c=='\n'||c==EOF)
				{
					flag=1;
					break;
				}
			}
			a[st].push_back(i);
			if(flag==1)
				break;
		}
	}
	int max = 0;
	for(map<string , vector<int> > :: iterator it = a.begin();it!=a.end();it++)
	{
	/*	cout<< it->first<< " ";
		for(int i = 0;i!=it->second.size();i++)
		{
			cout<<it->second.at(i);
		}
		cout<<endl;
	*/
		if(it->second.size()==1)
		{
			if(it->first.length()<=4)
				ans[it->second.front()]++;
			else if(it->first.length()==5)
				ans[it->second.front()]+=2;
			else if(it->first.length()==6)
				ans[it->second.front()]+=3;
			else if(it->first.length()==7)
				ans[it->second.front()]+=5;
			else if(it->first.length()>=8)
				ans[it->second.front()]+=11;
			if(ans[it->second.front()]>max)
				max = ans[it->second.front()];
		}
	}
	cout<<max<<endl;
	return 0;
}

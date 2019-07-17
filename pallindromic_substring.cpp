#include<bits/stdc++.h>
using namespace std;
void printSubStr( string str, int low, int high ) 
{ 
	for( int i = low; i <= high; ++i ) 
		cout << str[i]; 
		cout<<endl;
} 
void go(string s)
{
    int n=s.length();
    int m[n][n];
    memset(m,0,sizeof(m));
    int ans=1;
    for(int i=0;i<n;i++)m[i][i]=1;
    int start=0;
    for(int i=n-2;i>=0;i--)
    {
        if(s[i]==s[i+1])
        {
            m[i][i+1]=1;
            start=i;
            ans=2;
        }
    }
    
    for(int cl=3;cl<=n;cl++)
    {
        for(int i=0;i<n-cl+1;i++)
        {
            int j=i+cl-1;
            if(s[i]==s[j]&&m[i+1][j-1]==1)
            {
                m[i][j]=1;
                if(cl>ans)
                {
                    start=i;
                    ans=cl;
                }
            }
        }
    }
    printSubStr( s, start, start + ans - 1 ); 
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        go(s);
    }
	return 0;
}

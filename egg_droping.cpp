#include<bits/stdc++.h>
using namespace std;
int go(int n,int k)
{
    int e[n+1][k+1];
    int res,i,j,x;
    for(i=1;i<=n;i++)
    {
        e[i][1]=1;
        e[i][0]=0;
    }
    for(j=1;j<=k;j++)
        e[1][j]=j;
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=k;j++)
        {
            e[i][j]=INT_MAX;
            for(x=1;x<=j;x++)
            {
                res=1+max(e[i-1][x-1],e[i][j-x]);
                if(res<e[i][j])
                    e[i][j]=res;
            }
        }
    }
    return e[n][k];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        cout<<go(n,k)<<endl;
    }
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int mini(int m,int n,int o)
{
    return min(m,min(n,o));
}
int go(string str1,string str2)
{
    int n=str1.length();
    int m=str2.length();
    int mat[n+1][m+1];
    for(int i=0;i<=n;i++)
        mat[i][0]=i;
    for(int i=0;i<=m;i++)
        mat[0][i]=i;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                mat[i][j]=mat[i-1][j-1];
            }
            else 
            {
                mat[i][j]=1+mini(mat[i][j-1],mat[i-1][j],mat[i-1][j-1]);
            }
        }
    }
    
    return mat[n][m];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;
        cin.ignore();
        string str1,str2;
        cin>>str1>>str2;
        cout<<go(str1,str2)<<endl;
    }
	return 0;
}

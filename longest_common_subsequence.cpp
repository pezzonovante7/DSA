#include<bits/stdc++.h>
using namespace std;
int go(string str1,string str2)
{
    int n=str1.length();
    int m=str2.length();
    int mat[n+1][m+1];
    for(int i=0;i<=n;i++)
        mat[i][0]=0;
    for(int i=0;i<=m;i++)
        mat[0][i]=0;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                mat[i][j]=mat[i-1][j-1]+1;
            }
            else 
            {
                mat[i][j]=max(mat[i][j-1],mat[i-1][j]);
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
        getline(cin,str1);
        getline(cin,str2);
        cout<<go(str1,str2)<<endl;
    }
	return 0;
}

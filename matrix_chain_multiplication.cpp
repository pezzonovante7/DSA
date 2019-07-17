#include<bits/stdc++.h>
using namespace std;
void printParanthesis(int i,int j,int n,int *bracket,char &name)
{
    if(i==j)
    {
        cout<<name++;
        return;
    }
    cout<<"(";
    
    printParanthesis(i,*((bracket+i*n)+j),n,bracket,name);
    
    printParanthesis(*((bracket+i*n)+j)+1,j,n,bracket,name);
    
    cout<<")";
}
void go(vector<int> v)
{
    int i,k,j,n=v.size(),q,L;
    int m[n][n];
    int bracket[n][n];
    for(i=0;i<n;i++)m[i][i]=0;
    
    for(L=2;L<n;L++)
    {
        for(i=1;i<n-L+1;i++)
        {
            j=i+L-1;
            m[i][j]=INT_MAX;
            for(k=i;k<j;k++)
            {
                q=m[i][k]+m[k+1][j]+v[i-1]*v[k]*v[j];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    bracket[i][j]=k;
                }
            }
        }
    }
    char name='A';
    printParanthesis(1,n-1,n,(int *)bracket,name);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,in;
        vector<int> v;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            v.push_back(in);
        }
        go(v);
        cout<<endl;
    }
	return 0;
}

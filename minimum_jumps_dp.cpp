#include<bits/stdc++.h>
using namespace std;
long go(vector<long> v)
{
    if(v.size()==0||v[0]==0)return -1;
    int *jumps=new int[v.size()];
    jumps[0]=0;
    for(int i=1;i<v.size();i++)
    {
        jumps[i]=INT_MAX;
        for(int j=0;j<i;j++)
        {
            if(i<=j+v[j]&&jumps[j]!=INT_MAX)
            {
                jumps[i]=min(jumps[i],jumps[j]+1);
                break;
            }
        }
    }
    return jumps[v.size()-1]==INT_MAX?-1:jumps[v.size()-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,in;
        vector<long> v;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            v.push_back(in);
        }
        cout<<go(v)<<endl;
    }
	return 0;
}

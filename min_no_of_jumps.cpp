#include<bits/stdc++.h>
using namespace std;
long long int go(vector<long long int> vec)
{
    if(vec.size()<=1)return 0;
    if(vec[0]==0)return -1;
    
    long long int maxReach=vec[0];
    long long int step=vec[0];
    long long int jump=1;
    
    long long int i=1;
    for(i=1;i<vec.size();i++)
    {
        if(i==vec.size()-1)
            return jump;
            
        maxReach=max(maxReach,vec[i]+i);
        step--;
        if(step==0)
        {
            jump++;
            
            if(i>=maxReach)
                return -1;
            
            step=maxReach-i;
        }
    }
    return -1;
}
int main()
{
    long long int t,n,in,temp;
    
    cin>>t;
    while(t--)
    {
        cin>>n;
       
        vector<long long int > vec;
        for(long long int i=0;i<n;i++)
        {
            cin>>in;
            vec.push_back(in);
        }
        cout<<go(vec)<<endl;
    }
	return 0;
}

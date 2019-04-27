#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> vec)
{
   int curmax=vec[0],gmax=vec[0];
   for(int i=1;i<vec.size();i++)
   {
       curmax=max(vec[i],curmax+vec[i]);
       gmax=max(gmax,curmax);
   }
   return gmax;
}
int main()
{
    int t,in,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            vec.push_back(in);
        }
        cout<<kadane(vec)<<endl;
        
    }
	return 0;
}

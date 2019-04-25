#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void go(string soFar,string rest)
{
    if(rest.size()==0)
        ans.push_back(soFar);
    else
    {
            go(soFar+rest[0],rest.substr(1));
            go(soFar,rest.substr(1));
    }
}
int main()
{
    string str;
    cin>>str;
    go("",str);
    for(string x: ans)
    {
        cout<<x<<endl;
    }
    
}

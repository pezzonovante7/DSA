#include<bits/stdc++.h>
using namespace std;
bool go(string s)
{
    int i=0;
    int val=0,x=1;
    for(i=s.length()-1;i>=0;i--)
    {
        if(s[i]-'0'>=0&&s[i]-'9'<=0)
        {
            val=val+(s[i]-'0')*x; 
            x*=10;
        }
        else break;
    }
    return val==i+1;
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
        cout<<go(s)<<endl;
    }
	return 0;
}

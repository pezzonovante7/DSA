#include<bits/stdc++.h>
using namespace std;
void go(string soFar,string rest)
{
    if(rest.size()==0)
        cout<<soFar<<endl;
    else
    {
        for(int i=0;i<rest.length();i++)
        {
            string remaining=rest.substr(0,i)+rest.substr(i+1);
			go(soFar+rest[i],remaining);
        }
    }
}
int main()
{
    string str;
    cin>>str;
    go("",str);
    
}

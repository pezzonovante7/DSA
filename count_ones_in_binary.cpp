#include<bits/stdc++.h>
using namespace std;
long long int countBits(long long int n)
{
    int count=0;
    while(n!=0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<countBits(n)<<endl;
    }
	return 0;
}

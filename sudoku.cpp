#include<bits/stdc++.h>
using namespace std;
int board[9][9];
bool isCompleted(int &i,int &j)
{
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            if(board[i][j]==0)
                return false;
    return true;
}
bool isSafe(int i,int j,int k)
{
    for(int it=0;it<9;it++)
        if(board[it][j]==k)
            return false;
            
    for(int it=0;it<9;it++)
        if(board[i][it]==k)
            return false;

    int row=i-(i)%3;
    int col=j-(j)%3;
    
    for(int i=row;i<row+3;i++)
        for(int j=col;j<col+3;j++)
            if(board[i][j]==k)
                return false;
                
    return true;
}
bool go()
{
    int row,col;
    if(isCompleted(row,col))
        return true;
    for(int i=1;i<10;i++)
    {
        if(isSafe(row,col,i))
        {
            board[row][col]=i;
            if(go())return true;
            board[row][col]=0;
        }
    }
    return false;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                cin>>board[i][j];
    
        if(go())
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<board[i][j]<<" ";
            }       
        }
        cout<<endl;
    }
	return 0;
}

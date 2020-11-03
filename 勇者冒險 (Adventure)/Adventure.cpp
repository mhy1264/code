#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,r,rs,cs,rd,cd,n,i,j,x,y,lev;
    cin>>c>>r>>rs>>cs>>rd>>cd>>n;
 //      6  5  1   1   4   3   18
    c+=2;
    r+=2;
    int forest[c][r];

    for(i=0;i<c+2;i++)
    {
        for(j=0;j<r;j++)
        {
            forest[i][j]=-1;
        }
    }
    forest[rd+1][cd+1]=1000;
    for(i=0;i<n;i++)
    {
        cin>>x>>y>>lev;
        forest[x+1][y+1]=lev;
    }

// =====DEBUG======
 /*   for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            cout<<forest[i][j]<<"\t";
        }
        cout<<endl;
    }*/
    cout<<cos(30)

}

/*
6 5
1 1 4 3
18
0 0 2
0 1 3
1 0 1
1 2 1
1 3 4
1 4 2
2 0 3
2 1 2
2 4 4
3 1 3
3 2 5
3 3 2
3 4 3
4 1 3
4 2 5
4 4 2
5 2 2
5 3 2
*/

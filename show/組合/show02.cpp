#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,N,i,j;
    int cbudget=0,cpop=0,maxbudget=0,maxpop=0;
    cin>>a>>N;
    pair<int ,int > team[N]; //pop bud
    for(i=0;i<N;i++)
    {
        cin>>team[i].first>>team[i].second;
    }
    int binary[N];
    for(i=0;i<N;i++)// init bin
    {
        binary[i]=0;
    }
    for(i=0;i<pow(2,N);i++)
    {
        binary[0]++;
        for(j=0;j<N;j++) //¶i¦ì
        {
            if(binary[j]==2)
            {
                binary[j]=0;
                binary[j+1]++;
            }
        }
        for(j=0;j<N;j++)
        {
            cpop+=team[j].first;

        }
    }
}

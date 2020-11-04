#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,N,i,j;
    int cbudget=0,finalbudget=0,cpop=0,maxp=0;
    cin>>a>>N;
    pair<int ,int> team[N];  //first=> population second=>budgret
    for(i=0;i<N;i++)
    {
        cin>>team[i].first>>team[i].second;
    }


    while(next_permutation(team,team+N))
    {
        for(i=0;i<N;i++)
        {
            cout<<team[i].first<<" ";
        }
        cout<<endl;
    }
}

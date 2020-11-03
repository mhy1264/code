#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,N,i,j;
    int cbudget=0,finalbudget=0,cpop=0,maxp=0;
    cin>>a>>N;
    pair<int ,int> team[N];
    for(i=0;i<N;i++)
    {
        cin>>team[i].first>>team[i].second;
    }

    for(i=0;i<N;i++)
    {
        if(cbudget<a)
        {
            cbudget+=team[i].second;
            cpop+=team[i].first;
        }
    }
    while(next_permutation(team,team+N))
    {
        if(cbudget+team[i].second<=a)
        {
            cbudget+=team[i].second;
            cpop+=team[i].first;
        }
        else
        {
            if(cpop>maxp)
            {
                maxp=cpop;
                finalbudget=cbudget;
            }
        }
        cbudget=0;
        cpop=0;
    }
    cout<<maxp<<" "<<finalbudget<<endl;
}

/*
7 6
16 2
36 1
85 2
23 2
30 1
66 2
160 7
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,N,i,j;
    int cbudget=0,finalbudget=0,cpop=0,maxp=0;
    cin>>a>>N;
    pair<int ,int> team[N];  //first=> population second=>budget
    for(i=0;i<N;i++)
    {
        cin>>team[i].first>>team[i].second;
    }

    for(i=0;i<N;i++)
    {
        if(cbudget+team[i].second<=a)
        {
            cbudget+=team[i].second;
            cpop+=team[i].first;
        }
    }
    if(cpop>maxp)
    {
        maxp=cpop;
        finalbudget=cbudget;
    }
    cout<<maxp<<" "<<finalbudget<<endl;
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
                cout<<maxp<<" "<<finalbudget<<endl;
            }
        }
        cbudget=0;
        cpop=0;
    }
    cout<<maxp<<" "<<finalbudget<<endl;
}

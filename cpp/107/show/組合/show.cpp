/*
7 6
16 2
36 1
85 2
23 2
30 1
66 2*/
#include<bits/stdc++.h>
using namespace std;
void binary(int situation[],int N)
{
    int j;
    situation[0]++;
    for(j=0;j<N;j++)
    {
        if(situation[j]==2)
        {
            situation[j+1]++;
            situation[j]=0;
        }
    }
}
int main()
{
    int a,N,i,j,cpop=0,cbud=0,mpop=0,mbud;
    cin>>a;
    cin>>N;
    pair <int,int> team[i]; // pop bud
    int situation[N];
    mbud=a;
    for(i=0;i<N;i++)
    {
        situation[i]=0;
    }

    for(i=0;i<N;i++)
    {
        cin>>team[i].first>>team[i].second;
    }

    for(i=0;i<pow(2,N);i++)
    {
        cout<<i<<"\t";
        binary(situation,N);
        /*
        for(j=0;j<N;j++)
        {
            cout<<situation[j];
        }
        cout<<endl;
*/
        for(j=0;j<N;j++)
        {
            cpop+=situation[j]*team[j].first;
            cbud+=situation[j]*team[j].second;
        }
        if(cpop>mpop && a>cbud)
        {
//           cout<<"===============>YES"<<endl;
            mbud=cbud;
            mpop=cpop;
        }
        cpop=0;
        cbud=0;

    }
    cout<<mpop<<" "<<mbud;
}

#include<bits/stdc++.h>
using namespace std;
void reset(int number[],int N)
{
    int i;
    for(i=0;i<=N;i++)
    {
        number[i]=0;
    }
}

void show(int number[],int N)
{
    int i;
    for(i=0;i<=N;i++)
    {
        cout<<number[i]<<" ";
    }
    cout<<endl;
}
void add(int number[],int N)
{
    number[0]++;
    int i;
    for(i=0;i<=N;i++)
    {
        if(number[i]>N)
        {
            number[i]=0;
            number[i+1]++;
        }
    }
}

/// FIXME (Ming#1#11/07/20): 待debug ... ...
///1* 已知add( )無問題
///2*似乎是 compose[number[i]出問題(L43)
int check_repeat(int number[],int N)
{
    int i,compose[N],mup=1;
    reset(compose,N);
    cout<<"com=>>";
    for(i=0;i<N;i++)
    {
        cout<<compose[number[i]]<<" ";
        compose[number[i]]++;
    }
    for(i=0;i<N;i++)
    {
        mup*=compose[i];
    }
    if(mup==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a,N=3,i,j;
    int number[N+1];
    reset(number,N);
    while(number[N]==0)
    {
        add(number,N);
        show(number,N);
        check_repeat(number,N);
    }
}

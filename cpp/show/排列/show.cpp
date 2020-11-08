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

int check_repeat(int number[],int N)
{
    int i,compose[N],mup=1;
    reset(compose,N);
    for(i=0;i<N;i++)
    {
        compose[number[i]]++;
    }
    for(i=1;i<=N;i++)
    {
        mup=mup*compose[i];
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
    int a,N,i,j;
    int cpop=0,cbud=0,mpop=0,tbud=0;
    cin>>a>>N;
    pair<int,int> team[N];
    int number[N+1];
    for(i=0;i<N;i++)
    {
        cin>>team[i].first>>team[i].second;
    }
    reset(number,N);
    while(number[N]==0)
    {
        add(number,N);

/* Debug (Ming#1#11/09/20): if(check_repeat())«İ½T»{
=>²¾¦Üdebug°Ï
 */

        if(check_repeat(number,N))
        {
            if(team[i].second+cbud<a)
            {
                cpop+=team[i].first;
                cbud+=team[i].second;
            }
            else
            {

                if(cpop<mpop)
                {
                    mpop=cpop;
                    tbud=cbud;
                }
                cpop=0;
                cbud=0;
            }
        }
    }
    cout<<cpop<<" "<<tbud<<endl;

}

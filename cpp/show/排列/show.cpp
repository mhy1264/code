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
    show(number,N);
    int i;
    for(i=0;i<=N;i++)
    {
        if(number[i]==6)
        {
            number[i]=0;
            number[i+1]++;
        }
    }
}

int check_repeat(int number,int N)
{

}
int main()
{
    int a,N,i,j;
    cin>>a>>N;
    pair<int,int> team[i];
    int number[N+1];
    reset(number,N);
    while(number[N]==0)
    {
        add(number,N);
        show(number,N);
        if(check_repeat(number,N))

        cout<<"finish";
        break;
    }

}

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

//    show(number,N);

    for(i=0;i<N;i++)
    {
        compose[number[i]]++;
    }
//    cout<<"compose: ";
//    show(compose,N);
    for(i=1;i<=N;i++)
    {
        mup=mup*compose[i];
    }
//    cout<<"mup: "<<mup<<endl;
    if(mup==1)
    {
//        cout<<"======================================YES"<<endl;
        return 1;
    }
    else
    {
 //       cout<<"NO"<<endl;
        return 0;
    }


/*
    number[]={0,0,1}
    compose[]={2 1 0 }
*/
    cout<<endl;

}

int main()
{
    int a,N=3,i,j;
    int number[N+1];
    reset(number,N);
    while(number[N]==0)
    {
        add(number,N);
        if(check_repeat(number,N))
        {

        }
    }
}

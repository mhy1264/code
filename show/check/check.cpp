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
    int a[]={1,2,3,},i;
    while(next_permutation(a,a+3))
    {
        for(i=0;i<3;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}

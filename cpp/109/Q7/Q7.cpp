#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k,l,way[3]={-1,0,1},sum=0;
    cin>>n;
    int matrix[n+2][n+2];
    char a;
    for(i=0;i<n+2;i++)
    {
        for(j=0;j<n+2;j++)
        {
            matrix[i][j]=0;
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a;
            if(a=='*')
            {
                continue;
            }
            else
            {
                cin>>a;
                matrix[i][j]=(int)a-'0';
                matrix[i][j]*=-1;
            }
        }
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            for(k=0;k<3;k++)
            {
                for(l=0;l<3;l++)
                {
                    cout<<matrix[i+way[k]][j+way[l]]<<" ";
                    if(matrix[i+way[k]][j+way[l]]>0)
                    {
                        sum+=matrix[i+way[k]][j+way[l]];
                    }
                }
            }
            cout<<endl;
            matrix[i][j]+=sum;
            sum=0;
        }
    }

    for(i=0;i<n+2;i++)
    {
        for(j=0;j<n+2;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

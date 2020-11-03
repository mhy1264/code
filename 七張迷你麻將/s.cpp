#include<bits/stdc++.h>
#define n 1
using namespace std;

int  main()
{
	int i,j,k,l,check,status=0,addint,sum,compose[16],take[16];
	int element[]={(int)'1',(int)'2',(int)'3',(int)'4',(int)'5',(int)'6',
				   (int)'7',(int)'8',(int)'9',(int)'A',(int)'B',(int)'C',
				   (int)'D',(int)'E',(int)'F',(int)'G'};
//	cin>>n;
	string input[n];
	set<int> set_element (element, element+16);

	for(i=0;i<n;i++) //input input[i]
	{
		cin>>input[i];
	}

	for(i=0;i<n;i++)
	{
	    for(j=0;j<16;j++)
        {
            compose[j]=0;
        }
		if(input[i].size()==7)
		{
			for(j=0;j<7;j++)
			{
				if(!set_element.count((int)input[i][j]))                                 //判斷字元合法性
				{
					status=1;
				}
				else                                                                    //陣列化
				{
				    for(k=0;k<16;k++)
                    {
                        take[k]=0;
                    }
					if((int)input[i][j]>(int)'0' and (int)input[i][j]<=(int)('9'))
					{
						compose[(int)input[i][j]-'0'-1]++;
					}
					else
					{
						compose[(int)input[i][j]-55-1]++ ;
					}
				}
			}
			for(k=0;k<16;k++)                                                       // 判斷最高字數
            {
                if(compose[i]>4)
                {
                    status=1;
                    break;
                }
            }
            cout<<" Ready for ";
            for(addint=0;addint<=16;addint++)
            {
 //               cout<<"ADD No."<<addint+1<<endl;
                compose[addint]++;       //填入字元
/*                for(l=0;l<16;l++)
                {
                    cout<<compose[l]<<" ";
                }
                cout<<endl;
*/
                for(k=0;k<15;k++)
                {
 //                  cout<<compose[k-1]<<" "<<compose[k]<<" "<<compose[k+1]<<endl;;
                    if(compose[k]==3 or compose[k-1]*compose[k]*compose[k+1]>=1)
                    {
                        if(compose[k]==3)
                        {
 //                           cout<<"!3"<<endl;
                            take[k]+=3;
                            compose[k]-=3;
  /*                          for(l=0;l<16;l++)
                            {
                                cout<<compose[l]<<" ";
                            }
                            cout<<endl;
 */                       }
                        if(compose[k-1]*compose[k]*compose[k+1]>=1)
                        {
    //                        cout<<"!1"<<endl;
                            take[k-1]++;
                            take[k]++;
                            take[k+1]++;
                            compose[k-1]--;
                            compose[k]--;
                            compose[k+1]--;
/*                            for(l=0;l<16;l++)
                            {
                                cout<<compose[l]<<" ";
                            }
                            cout<<endl;
  */                    }
                    }
                }
                for(k=0;k<16;k++)
                {
                    sum+=compose[k];
                }
 //               cout<<sum<<endl;
                for(k=0;k<16;k++)
                {
                    if(compose[k]==2)
                    {
                        check=1;
                    }
                }
                if(sum==2 and check==1 )
                {
                    check=0;
                    cout<<(char)element[addint]<<" ";
                }
                for(k=0;k<16;k++)
                {
                    compose[k]+=take[k];
                    take[k]=0;
                }
                compose[addint]--;
                sum=0;
            }
		}
		else
		{
			status=1;
		}
		if(status)
		{
			cout<<"-1"<<endl;
		}

	 }
 }

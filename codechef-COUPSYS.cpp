//Solution: 19756863
#include <iostream>
#include <stdio.h>
using namespace std;
struct comp
{
    int c;
    int l;
    int x;
};
int main()
{
    int T,n,max1,max2,max3,city1,city2,city3;
    cin>>T;
    scanf("&d",&T);
    while(T--)
    {
        cin>>n;
        struct comp* compete[n];
        for (int i=0;i<n;i++)
        {
            compete[i]= new comp[1];
        }
        for (int i=0;i<n;i++)
        {
            cin>>compete[i]->c>>compete[i]->l>>compete[i]->x;
        }
        max1=0;
        max2=0;
        max3=0;
 
        for (int i=0;i<n;i++)
        {
            if (compete[i]->l==1)
            {
                if (compete[i]->x>=max1)
                {
                    max1=compete[i]->x;
                    city1=compete[i]->c;
                }
            }
            else if (compete[i]->l==2)
            {
                  if (compete[i]->x>=max2)
                {
                    max2=compete[i]->x;
                    city2=compete[i]->c;
                }
            }
            else if (compete[i]->l==3)
            {
                  if (compete[i]->x>=max3)
                {
                    max3=compete[i]->x;
                    city3=compete[i]->c;
                }
            }
        }
        for (int i=0;i<n;i++)
        {
            if (compete[i]->x==max1 && compete[i]->l==1)
            {
                if (city1>compete[i]->c)
                {
                    city1=compete[i]->c;
                }
            }
            if (compete[i]->x==max2 && compete[i]->l==2)
            {
                if (city2>compete[i]->c)
                {
                    city2=compete[i]->c;
                }
            }
            if (compete[i]->x==max3 && compete[i]->l==3)
            {
                if (city3>compete[i]->c)
                {
                    city3=compete[i]->c;
                }
            }
        }
 
        cout<<max1<<" "<<city1<<endl<<max2<<" "<<city2<<endl<<max3<<" "<<city3<<endl;
        //delete compete;
 
    }
    return 0;
}
 
	

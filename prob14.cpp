#include <iostream>

using namespace std;
struct look
{
    int length;
    bool isFilled;
};
int main()
{
 look* arr[1000000];
 int maxm=0;
 int counter=0;
 int number=1;
 for (int i=1;i<1000000;i++)
{
    arr[i]=new look;
}
arr[1]->isFilled=true;
arr[1]->length=1;
for (int j=1;j<1000000;j++)
{
    if (arr[j]->isFilled==true)
    {
        if (maxm<arr[j]->length)
        {
            maxm=arr[j]->length;
            number=j;
        }
    }
    else
    {
        counter=1;
        for (int i=j;j>1;j++)
        {
            if (i%2==0)
            {
                i/=2;
            }
            else
            {
                i=i*3+1;
            }
            if (arr[i]->isFilled==true)
            {
               counter+=arr[i]->length;
               break;
            }
            counter++;
        }
        if (counter>maxm)
        {
            maxm=counter;
            number=j;
        }
    }
}

    cout<<counter;
    return 0;
}

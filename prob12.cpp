#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int> triangle;
int listfactors(long long x)
{
    int counter=0;
   for (int i=1;i<=sqrt(x);i++)
   {
       if (x%i==0)
       {
           if (x/i==i)
           {
               counter++;
           }
           else
           {
               counter+=2;
           }
       }
   }
    return counter;
}

int main()
{
    triangle.push_back(1);
    for (int i=2;;i++)
    {
        triangle.push_back(i+triangle[i-2]);
       if (listfactors(triangle[i-1])>=500)
       {
           cout<<triangle[i-1];
           break;
       }
    }
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
vector<int> triangle;
int listfactors(long long x)
{
    int counter=2;
    for (int i=2;i<=x/2;i++)
    {
        if (x%i==0)
            counter++;
        while (x%i==0 && x!=1)
        {
            x/=i;
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
        cout<<listfactors(triangle[i-1])<<" ";
       if (listfactors(triangle[i-1])>=5)
       {
           cout<<triangle[i-1];
           break;
       }
    }
    return 0;
}

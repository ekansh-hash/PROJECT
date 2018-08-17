#include <iostream>
#include <cmath>
using namespace std;
int fact(long long num)
{
    while (num%2==0)
    {
        num/=2;
    }
    for (int i=3;i<=sqrt(num);i+=2)
    {
        while(num%i==0)
        {
            num/=i;
        }
    }
    if (num>2)
        return num;
}
int main()
{
    cout<<fact(600851475143 );
    return 0;
}

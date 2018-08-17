#include <iostream>
 
using namespace std;
 
int main()
{
    int T;
    cin>>T;
    int N,temp;
    while(T--)
    {
        cin>>N;
        char* newstring = new char[N];
        for (int i=0;i<N;i++)
        {
            cin>>newstring[i];
        }
        for (int i=0;i<N-1;i+=2)
        {
            temp=newstring[i];
            newstring[i]=newstring[i+1];
            newstring[i+1]=temp;
        }
       for (int i=0;i<N;i++)
       {
           if (newstring[i]<110)
           {
               newstring[i]=109+(110-newstring[i]);
           }
           else
           {
               newstring[i]=110-(newstring[i]-109);
           }
       }
       for (int i=0;i<N;i++)
       {
           cout<<newstring[i];
       }
       cout<<endl;
    delete newstring;
    }
}
 

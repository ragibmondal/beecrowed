#include<iostream>
using namespace std;

int main()
{
    int i,n,high=0,pos=0;

    for(i=0;i<100;i++)
    {
        cin>>n;
        if(n>high)
        {
            high=n;
            pos=i;
        }
    }
    cout<<high<<endl<<pos+1<<endl;

    return 0;
}

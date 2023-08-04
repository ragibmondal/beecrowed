#include<iostream>
using namespace std;

int main()
{
    int M,N,temp,sum,i;

    while(1)
    {
        cin>>M>>N;
        if(M<=0||N<=0) break;

        if(M>N)
        {
            temp=M;
            M=N;
            N=temp;
        }
        sum=0;
        for(i=M;i<=N;i++)
        {
            cout<<i<<" ";
            sum+=i;
        }
        cout<<"Sum="<<sum<<endl;
    }
    return 0;
}

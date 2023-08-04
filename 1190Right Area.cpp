#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double M[12][12],sum=0.0;
    char ch;

    cin>>ch;

    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            cin>>M[i][j];
            if(j>(11-i)&&i<j)
                    sum+=M[i][j];
        }
    }
    if(ch=='S')
        cout<<fixed<<setprecision(1)<<sum<<endl;
    else
        cout<<fixed<<setprecision(1)<<sum/30.0<<endl;

    return 0;
}

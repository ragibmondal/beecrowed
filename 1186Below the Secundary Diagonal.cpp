#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    int i,j;
    double M[12][12];
    char ch;
    double sum=0.0;


    cin>>ch;


    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            cin>>M[i][j];
            if(j>11-i)
            {
                sum+=M[i][j];
            }
        }
    }
    if(ch=='S')
    {
        cout<<fixed<<setprecision(1)<<sum<<endl;
    }
    else
    {
        cout<<fixed<<setprecision(1)<<sum/66.0<<endl;
    }
    return 0;
}

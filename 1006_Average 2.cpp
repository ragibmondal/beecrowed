#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A,B,C;
    cin>>A>>B>>C;
    float avg=((A*2)+(B*3)+(C*5))/(2+3+5);
    cout<<fixed;
    cout<<setprecision(1);
    cout<<"MEDIA = "<<avg<<endl;

    return 0;
}


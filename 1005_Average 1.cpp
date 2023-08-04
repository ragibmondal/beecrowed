#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float A,B;
    cin>>A>>B;

    float avg=(((A*3.5)+(B*7.5))/(7.5+3.5));
    cout<<fixed;
    cout<<setprecision(5);
    cout<<"MEDIA = "<<avg<<endl;

    return 0;
}

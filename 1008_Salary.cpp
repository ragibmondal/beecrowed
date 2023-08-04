#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n,a;
    float s;

    cin>>n>>a>>s;

    float ans=a*s;

    cout<<"NUMBER = "<<n<<endl;
    cout<<fixed<<setprecision(2)<<"SALARY = "<<"U$ "<<ans<<endl;

    return 0;
}

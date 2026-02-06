#include<iostream>
using namespace std;
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=3)
        {
            cout<<-1;
            continue;
        }
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
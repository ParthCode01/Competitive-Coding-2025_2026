#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int maximum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maximum=max(maximum,a[i]);
    }
    vector<int> div(maximum+1,0);
    for(int i=1;i<=maximum;i++)
    {
        for(int j=i;j<=maximum;j+=i)
        {
            div[j]++;
        }
    }
    for(int nums:a)
    {
        cout<<div[nums]<<" ";
    }
    return 0;

}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=4,b=5,c=6;
    swap(a,b);
    cout<<a<<" "<<b;
    int mini=min(a,b);
    cout<<mini<<endl;
    cout<<max(a,b)<<endl;
    cout<<max({a,b,c})<<endl;

    vector<int>r = {3,2,4,7,5};
    for(int i=0;i<r.size();i++)
    cout<<r[i]<<" "<<endl;

    sort(r.begin(),r.end());
    for(int i=0;i<r.size();i++)
    cout<<r[i]<<endl;
    cout<<"after sort "<<endl;
    sort(r.begin(),r.end());
    for(int i=0;i<r.size();i++)
    cout<<r[i]<<endl;
}

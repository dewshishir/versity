#include<bits/stdc++.h>
using namespace std;
void merges(vector<int>&arr,int low,int mid,int high)
{
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<= high)
    {
        if(arr[left]>=arr[right])
        {
            temp.push_back(arr[right]);
            right++;
        }
        else {
        temp.push_back(arr[left]);
        left++;
        }
    }
    while(left <= mid ){
    temp.push_back(arr[left]);
    left++;
    }
    while(right <= high ){
    temp.push_back(arr[right]);
    right++;
    }
    for(auto it : temp){
    cout<<it<<" ";
    }
}
void Merge(vector<int>&v, int low,int high)
{
    if(low >= high)return;
    int mid = (low + high)/2;
    Merge(v,low,mid);
    Merge(v,mid+1,high);
    merges(v,low,mid,high);
}

int main()
{
    int n;
    cin>> n;
    vector<int> v(n);
    for(int i =0; i<n; i++)
    {
        cin>>v[i];
    }
    Merge(v,0,n-1);
}

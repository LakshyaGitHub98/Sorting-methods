#include<bits/stdc++.h>
using namespace std;
void selection_sort(int n,vector<int>arr,char ch)
{
    if(ch=='I'||ch=='i')
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    arr[i]=arr[i]^arr[j];
                    arr[j]=arr[i]^arr[j];
                    arr[i]=arr[i]^arr[j];
                }
            }
        }
    }
    else if(ch=='d'||ch=='D')
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    arr[i]=arr[i]^arr[j];
                    arr[j]=arr[i]^arr[j];
                    arr[i]=arr[i]^arr[j];
                }
            }
        }
    }
    else {
        cout<<"Wrong choice !!";
    }    
}
int main()
{
    int n,a;
    char ch;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    cout<<"Wanna sort it in increasing order(i/I) or decreasing order(d/D) :";
    cin>>ch;
    selection_sort(n,arr,ch);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
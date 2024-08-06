#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int n,vector<int>arr,char ch)
{
    if(ch=='i'||ch=='I')
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
            }
        }
    }
        
    }   
    else if(ch=='d'|| ch=='D')
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    arr[j]=arr[j]^arr[j+1];
                    arr[j+1]=arr[j]^arr[j+1];
                    arr[j]=arr[j]^arr[j+1];
                }
            }
        }
    }
    else {
        cout<<"Wrong choice!!";
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
    cout<<"Wanna to sort array in Increasing order (i/I) or Decreasing order (d/D): ";
    cin>>ch;
    bubble_sort(n,arr,ch);
    return 0;
}
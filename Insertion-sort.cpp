#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n,char ch) {
    if(ch=='i' or ch=='I')
    {
        for (int i = 0; i <= n - 1; i++) 
        {
            int j = i;
            while (j > 0 && arr[j - 1] > arr[j])
            {
                swap(arr[j-1],arr[j]);
                j--;
            }
        }
    }
    else if(ch=='d' or ch=='D')
    {
        for (int i = 0; i <= n - 1; i++) 
        {
            int j = i;
            while (j > 0 && arr[j - 1] <arr[j])
            {
                swap(arr[j],arr[j-1]);
                j--;
            }
        }
    }
    else 
    {
        cout<<"Wrong choice!\n";
        return ;
    }
    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int n;
    char ch;
    cin>>n;
    cout<<"Wanna sort it in Increasing order (i/I) or Decreasing order (d/D):";
    cin>>ch;
    int arr[n];
    cout<<"Enter the elements in the array :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort(arr, n,ch);
    return 0;
}
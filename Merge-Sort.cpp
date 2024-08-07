#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high,char ch) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//
        if(ch=='i' or ch=='I')
        {
            while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }
    
        // if elements on the left half are still left //
    
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
    
        //  if elements on the right half are still left //
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }
    }
    else
    {
        while (left <= mid && right <= high) {
            if (arr[left] >= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }
    
        // if elements on the left half are still left //
    
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
    
        //  if elements on the right half are still left //
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

    }
    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high,char ch) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSort(arr, low, mid,ch);  // left half
    mergeSort(arr, mid + 1, high,ch); // right half
    merge(arr, low, mid, high,ch);  // merging sorted halves
}

int main() {

    char ch;
    vector<int> arr;
    int n,temp;
    cout<<"Enter the size of array :";
    cin>>n;
    cout<<"CHoose the order (I/D):";
    cin>>ch;
    if(ch=='i' or ch=='I' or ch=='D' or ch=='d') 
    {
         cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        arr.push_back(temp);
    }
    mergeSort(arr, 0, n - 1,ch);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
    }
    else 
    {
        cout<<"Worng choice !!"<<endl;
        return 0;
    }
}
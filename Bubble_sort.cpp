#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Sorting by repeatedly swapping the adjacent elements

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

class Solution{
    public:
        void bubbleSort(int arr[],int n){
            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    if(arr[i] > arr[j]){
                        swap(&arr[i] , &arr[j]);
                        
                    }
                }
            }
        }
};

int main(){
    cout<<"Enter the size of array:- ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:- ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    Solution s;
    s.bubbleSort(arr,n);
    cout<<"The sorted array is:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
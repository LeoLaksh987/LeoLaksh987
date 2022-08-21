#include <iostream>
using namespace std;

void mergeSortedArray(int arr1[],int n, int arr2[], int m, int arr3[]){
    int i=0,j=0;
    int k=0;
    
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    
    //Copy the remaining elements of 1st Array
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    
    //Copy the remaining elements of 2nd Array
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}

void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main() {
    
    int n;
    cout<<"Enter the no. of elements in 1st Array: ";
    cin>>n;
    
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    
    int m;
    cout<<"Enter the no. of elements in 2nd Array: ";
    cin>>m;
    
    int arr2[m];
    for(int j=0;j<m;j++){
        cin>>arr2[j];
    }
    
    int arr3[n+m]={0};
    
    mergeSortedArray(arr1,n,arr2,m,arr3);
    
    print(arr3,n+m);
    
    return 0;
}

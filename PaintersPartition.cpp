#include <iostream>
using namespace std;

bool isPossible(int arr[],int n,int k,int mid){
    int paintersCount=1;
    int boardLength=0;
    
    for(int i=0;i<n;i++){
        if(boardLength+arr[i]<=mid){
            boardLength+=arr[i];
        }
        else{
            paintersCount++;
            if(paintersCount>k || arr[i]>mid){
                return false;
            }
            boardLength=arr[i];
        }
    }
    return true;
}

int painterPartition(int arr[],int n,int k){
   
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;
    
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main() {
    
    int n;
    cin>>n;
    
    int k;
    cin>>k;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<painterPartition(arr,n,k);

    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of elements :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" element :";
        cin>>arr[i];
    }
    cout<<"your elements : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"reversed elements : ";
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}

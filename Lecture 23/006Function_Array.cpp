#include<iostream>
using namespace std;
/*
int computeSum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i <n; i++)
    {
        sum+=arr[i];
    }
    return sum;
    
}
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    cout<<computeSum(arr, n);

    return 0;
}*/
int main(){
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    int j=0;
    i=0;
    int c[n1+n2];
    int count=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            c[count++]=a[i++];
        }
        if(a[i]>b[j]){
            c[count++]=b[j++];
        }
    }
    while(i<n1){
        c[count++]=a[i++];
    }
    while(j<n2){
        c[count++]=b[j++];
    }
    for(i=0;i<count;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

   
return 0;
}
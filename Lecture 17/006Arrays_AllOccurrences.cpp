#include<iostream>
using namespace std;
int main(){
    int arr[100]; //declaration of array of size 100
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for (int i = 0; i <=n-1; i++)
    {
        cin>>arr[i];
    }
    int t;
    cout<<"Enter the value to be searched: ";
    cin>>t;

    bool flag = false;
    for (int i = 0; i <=n-1; i++)
    {
        if (arr[i]==t)
        {
            cout<<i<<endl;
            flag = true;
        }
        
    }

    if (flag==false)
    {
        cout<<-1<<endl;
    }
    
    return 0;
}
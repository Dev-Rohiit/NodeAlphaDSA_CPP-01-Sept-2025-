#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int cnt = 0;   // count 
    for(int i=0; i<n; i++){
        int c = 1; // freq count
        bool flag = false;

        // check agar pehle count kar chuke
        for(int k=0; k<i; k++){
            if(arr[k] == arr[i]){
                flag = true;
                break;
            }
        }

        if(flag == true)
            continue;

        // count occurrences
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j])
                c++;
        }

        if(c > 1){
            cout << arr[i] << " ";
            cnt++;
        }

        if(cnt == 2)
            break;  // bas 2 repeat hi chahiye
    }

    return 0;
}

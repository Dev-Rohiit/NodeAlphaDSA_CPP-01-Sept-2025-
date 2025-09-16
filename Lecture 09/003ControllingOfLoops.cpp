// #include<iostream>
// using namespace std;
// int main(){
//     int count = 0;
//     int data;
//     while (true)
//     {
//         cin>>data;
//         if (data < 0)
//         {
//             break;
//         }
//         count = count + 1;
//     }
//     cout<<"Count is: "<<count<<endl;
    
// }


#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while (i<5)
    {
        i = i+1;
        if (i ==2)
        {
            continue;
        }
        
        cout<<"i is : "<<i<<endl;
    }
    
}


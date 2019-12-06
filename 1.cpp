#include <iostream>

using namespace std;

int main(){
    int n;
    cin>> n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }

    /*for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }*/

    int mode ;
    cin>> mode;

    if(mode == 1){
        for(int i = 1 ;i<n;i++){
            cout<< arr[i] - arr[i-1] <<" ";
        }
    }
    else if(mode == 2){
        for(int i = n-1 ;i>=1;--i){
            cout<< arr[i-1] - arr[i] <<" ";
        }
    }
    return 0;
}

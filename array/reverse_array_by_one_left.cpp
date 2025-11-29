#include <bits/stdc++.h>
using namespace std;


vector<int> reverse_shift(vector<int>&arr, int k){

    int size = arr.size();
    int tmp = arr[0]; // left k = 1 //so the first index
    for(int i=1; i<size; i++){ 
        arr[i-k] = arr[i];
    }
    arr[size-1] = tmp;

    return arr;
}

int main(){
    cout<<"Starting"<<endl;

    vector<int> arr ={1,2,3,4,5};
    int shift = 1;
    vector<int>r = reverse_shift(arr,shift);
    for(int i=0; i<r.size(); i++){
        cout<<r[i]<<" ";
    }


    cout<<"end"<<endl;
}
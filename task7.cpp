#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> index;
    int n, key;
    cout <<"Enter the size of array: ";
    cin>>n;
    int *arr = new int[n]; 
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout <<"Enter the Element whose index you want to find: ";
    cin >> key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index.push_back(i);
        }
    }
    if(index.size()==0){
        cout<<"Element not found in the array";

    }
    else{
        cout<<"Element found at index: ";
        for(int i=0;i<index.size();i++){
            cout<<index[i]<<" ";
        }
    }
    return 0;
}
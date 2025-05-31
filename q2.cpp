#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n ;
    int arr[5000];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[i];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int count=1;
    int freq=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            freq++;

        }else{
            freq =1;
        }
        if(freq>count){
            count = freq;
        }
    }


    cout<< count <<endl;


    return 0;
}
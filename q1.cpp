#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n ;
    int x;
    cin>> n >>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int first =0;
    int currentSum =0;
    int count =0 ;

    for(int i=0;i<n;i++){
        currentSum += arr[i];
    
    while(currentSum >x && first <= i){
        currentSum -= arr[first];
        first++;
    }
    if(currentSum==x){
        count++;
    }
}
cout<<count<<endl;

 return 0;
}
#include<iostream>
using namespace std;
#define maxTest 1000

int main (){
    int N;
    cin>> N;
    int A[maxTest] , B[maxTest];
    for(int i=0;i<N;i++){
    cin>> A[i];
    }
    
    for(int i=0;i<N;i++){
    cin>>B[i];
    }
    int total_beauty=0;
    int current_position=0;
    for(int i=0;i<N-1;i++){
        
        for(int j=i+1;j<N;j++){
         if(B[i]>B[j]){
            int temp =B[i]; B[i]=B[j];B[j]=temp;
            
            temp =A[i]; A[i]=A[j];A[j]=temp;
         }
        }
    }

    for(int i=0;i<N;i++){
     total_beauty += current_position*B[i];
     current_position+= A[i];
    }



    cout<< total_beauty<<endl;
     

    return 0;
}
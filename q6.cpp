#include<iostream>
#include<string>
using namespace std;

int main(){
    char str[50];
    fgets(str , 50 , stdin);
    // puts(str);
    int count =0;
    for(int i=0;i<50;i++){
        if(str[i]=='('&&str[i+1]==')'){
            count++;
        }
    }
    cout<<count;






    return 0;
}
#include<iostream>
#include<string>
using namespace std;

int main(){
    int N,count=0;
    string line1, line2;
    cout<<"Enter the first text:  ";
    cin>>line1;
    cout<<"Enter the second text: ";
    cin>>line2;
    cout<<"Enter N: ";
    cin>>N;

    while(count < N){
        if(count % 2 == 0){
            cout<<line1<<" ";
        }
        else{
            cout<<line2<<" ";
        }
        count++;
    }
}
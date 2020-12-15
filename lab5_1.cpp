#include<iostream>
using namespace std;

int main(){
    int i=1,even=0,odd=0;
    while(i != 0){
    cout << "Enter an integer: ";
    cin >> i;
        if(i%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout << "#Even numbers = " << even-1 << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}

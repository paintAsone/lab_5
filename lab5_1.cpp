#include<iostream>
using namespace std;

int main(){
    int x[1000];
    int i = 1,j = 0,k = 0;
    cout << "Enter an integer: ";
    cin >> x[0];
    if(x[0] == 0){
        j=0;
        k=0;
    }
    else do{
        cout << "Enter an integer: ";
        cin >> x[i];
        i++;
        if(x[i-1] %2 == 0){
            j++;
        }
        else{
            k++;
        }
    }while(x[i-1] != 0);
    cout << "#Even numbers = " << j;
    cout << "\n#Odd numbers = " << k;
    return 0;
}

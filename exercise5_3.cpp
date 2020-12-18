#include<iostream>
#include<cmath>
using namespace std;

int cheetah (int money){
    int bottle = money/10;
    int free=0;
    int free_bottle;
    free = bottle;
    while(free >= 3){
        free_bottle = free/3;
        bottle = free_bottle + bottle;
        free = free - free_bottle*3;
        free = free+free_bottle;
    }
    return bottle;
}

int main(){
    cout<<cheetah(204);
}

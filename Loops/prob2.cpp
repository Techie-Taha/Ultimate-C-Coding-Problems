// Print all the even numbers from 1 to 10

#include<iostream>
using namespace std;
int main(){
    


for(int i = 1; i <= 10; i++){
    if(i % 2 == 0){
        cout << i << endl; // before printing just put a condition. just print i
    }
}


for(int i = 1; i <= 10; i++){
    if(i % 2 != 0){
        cout << i << endl; // before printing just put a condition. just print i
    }
}

    return 0;
}
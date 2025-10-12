// Display this geometric progress - 1, 2, 4, 8, 16... upto 'n' terms

#include<iostream>
using namespace std;
int main(){

    int a = 1; //initialization a = 1, that's fixed


    int n;
    cout << "Enter: ";
    cin >> n;

    for(int i = 1; i < n; i++){ // let's say n = 5; we gonna print out 1 which is a. 
// we gonna increament i, now i = 2 amd a = 2. 
        
            cout << a << endl; // always print because as long as the conditon is true, print a and increment the value. 
            a = a*2;
    }



    return 0;
}
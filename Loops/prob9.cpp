// write a program to print reverse of a given number 


// Print r of all the even digits of a given number

#include<iostream>
using namespace std;
int main(){

    int number;
    cin >> number; // 324
    int r;
    r = 0;
    for(int i = number; number != 0; number /= 10){
        int lastDigit = number % 10;
        
        r = (r*10) + lastDigit; 
   
        

    }
    cout << r;
    




    return 0;
}
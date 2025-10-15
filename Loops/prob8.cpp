// Print sum of all the even digits of a given number

#include<iostream>
using namespace std;
int main(){

    int number;
    cin >> number; // 324
    int sum;
    sum = 0;
    for(int i = number; number != 0; number /= 10){
        int lastDigit = number % 10;
        if(lastDigit % 2 == 0){
        sum += lastDigit; // before printing just put a condition.
    }
        //sum += lastDigit;

    }
    cout << sum;
    




    return 0;
}
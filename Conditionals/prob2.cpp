// Take positive integer input and tell if it is divisible by both 5 and 3


#include <iostream> 
using namespace std;
int main() {
    int x;
    cout << "Enter number: ";
    cin >> x;
    if (x%5==0 && x%3==0){
        cout << "Divisible by both 5 and 3";

    }
    else{
        cout << "Not divisible by both 5 and 3";
    }
    
   

return 0;
}
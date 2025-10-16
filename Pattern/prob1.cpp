// write a Square pattern with ABCDE when n = 5;

#include<iostream>
using namespace std;
int main(){

  
    int n;
   // since square we can have only one variable for both rows and columns
    cin >> n; // n is the number of columns
    for( int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << (char)(j+64) << " "; // we are typecasting to get the ASCII values from int to char
        }
        cout << endl;
    }

return 0;
}
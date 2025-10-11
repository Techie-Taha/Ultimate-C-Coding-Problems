// print the table of 'n'. Here 'n' is a integer which user will input. 
#include<iostream>
using namespace std;
int main(){

int n;
cout << "Enter n value : ";
cin >> n;
for(int i = 1; i <= 10; i++){
    cout << n << " X " << i << " = " << n * i << endl;
}

    return 0;
}
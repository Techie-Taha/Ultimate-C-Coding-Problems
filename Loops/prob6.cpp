// Display this arithmetic progress - 1, 3, 5, 7, 9... upto 'n' terms

#include<iostream>
using namespace std;
int main(){


    int n;
    cout << "Enter: ";
    cin >> n;

    for(int i = 4; i <= 3*n+1; i=i+3){
        
            cout << i << endl;
    }



    return 0;
}
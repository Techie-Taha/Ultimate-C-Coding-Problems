//Take 3 positive integers input and print the greatest of them


#include <iostream> 
using namespace std;
int main() {
    int a, b, c;
     
    cout << "Enter the 1st number : ";
    cin >> a;
    cout << "Enter the 2nd number : ";
    cin >> b;
    cout << "Enter the 3rd number : ";
    cin >> c;
    
    if(a>c and a>b){ 
        cout <<"Greatest number is " << a;
    }
    if (b>c and b>a){
        cout << "Greatest number is " << b;
    
    }
    if (c>b and c>a){
        cout << "Greatest number is " << c;
    
    }
    return 0;


}

//create a calculator with basic arithmetic functions


#include <iostream> 
using namespace std;
int main() {
    int a;
    
    cin >> a;
    char num;
    cin >> num;
    int b;
    
    cin >> b;
    if(num == '+'){
        cout << a+b;
    }
    if(num == '-'){
        cout << a-b;
    }
    if(num == '*'){
        cout << a*b;
    }

    if(num == '/'){
        cout << a/b;
    }
    

    return 0;
}
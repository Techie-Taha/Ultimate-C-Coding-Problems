// calculate simple interest where principle is 1000, rate is 30% and time is 3 years
#include <iostream> 
using namespace std;
int main() {
    float p = 1000, t =3, r = 30;
    cout << "Simple interest is " << (p*r*t)/100 << "$"; // in the terminal we will see 900




return 0; 



}
/* we could also solve it like this
float p;
    p = 1000;
    
    float r;
    r = 30;
    float t;
    t = 3;
    cout << "Simple interest is: " << ((p*r*t)/100) << endl; */
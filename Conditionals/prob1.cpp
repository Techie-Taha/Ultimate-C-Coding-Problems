/* If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has 
made profit or incured loss or no profit no loss. Also determine how much profit he made or loss he incurred.
*/


#include <iostream> 
using namespace std;
int main() {
    int costPrice, sellingPrice;

    cout << "Enter costPrice : ";
    cin >> costPrice;
    cout << "Enter sellingPrice: ";
    cin >> sellingPrice;
    
    if (costPrice < sellingPrice) {
        
        cout << "Profit is " << sellingPrice - costPrice <<"$";
    }
    if (costPrice > sellingPrice) {
        cout << "You lost " << costPrice - sellingPrice <<"$";
    }
    if (costPrice == sellingPrice) {
        cout << "No profit no loss";
    }
    
    
   

return 0;
}
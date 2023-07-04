#include <iostream>

using namespace std;

int main(){
    
    int amount{0};
    cout<<"Enter the amount in cents: ";
    cin>>amount;
    
    int dollor{100},quarter{25},dime{10},nickel{5},penny{1};
    
    dollor = amount/dollor;
    amount = amount - 100*dollor;
    
    quarter = amount/quarter;
    amount = amount - 25*quarter;
    
    dime = amount/dime;
    amount = amount - 10*dime;
    
    nickel = amount/nickel;
    amount = amount - 5*nickel;
    
    penny = amount;
    
    cout<<"You can provide this change as follows: "<<endl;
    cout<<"dollors: "<<dollor<<endl;
    cout<<"quarters: "<<quarter<<endl;
    cout<<"dimes: "<<dime<<endl;
    cout<<"nickels: "<<nickel<<endl;
    cout<<"pennies: "<<penny<<endl;

    
    return 0;
}
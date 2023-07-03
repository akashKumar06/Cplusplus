#include <iostream>

using namespace std;

int main(){
    
    const double usd_per_eur {1.19};
    
    double euros {0.0};
    double dollors {0.0};
    cout<<"Welcome to EUR to USD convertor"<<endl;
    cout<<"Enter the value in EUR: ";
    cin>>euros;
    
    dollors = euros * usd_per_eur;
    
    cout<<euros<<" euros is equivalent to " <<dollors<<" dollors"<<endl;
    cout<<endl;
    return 0;
}
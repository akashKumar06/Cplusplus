#include <iostream>

using namespace std;

int main(){
    
    const int charges {30};
    const double tax_rate {0.06};
    
    cout<<"Enter the number of rooms: ";
    int nmbr_of_room {0};
    cin>> nmbr_of_room;
    
    cout<<endl;
    cout<<"Estimate of carpet cleaning service: "<<endl;
    cout<<"Number of rooms: "<<nmbr_of_room<<endl;
    cout<<"Price per room: $"<<charges<<endl;
    
    int cost = nmbr_of_room*charges;
    cout<<"Cost: "<<cost<<endl;
    
    double tax = (nmbr_of_room)*(charges)*(tax_rate);
    cout<<"Tax: "<<tax<<endl;
    cout<<"================================"<<endl;
    double total_estimate;
    total_estimate = (cost) + (tax);
    cout<<"Total estimate: "<<total_estimate<<endl;
    cout<<"This estimate is valid for 30 days";
    return 0;
}
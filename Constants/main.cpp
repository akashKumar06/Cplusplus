#include <iostream>

using namespace std;

int main(){
    
    const int charges {30};
    const double sales_rate {0.06};
    
    cout<<"Enter the number of rooms: ";
    int nmbr_of_room {0};
    cin>> nmbr_of_room;
    
    cout<<endl;
    cout<<"Estimate of carpet cleaning service: "<<endl;
    cout<<"Number of rooms: "<<nmbr_of_room<<endl;
    cout<<"Price per room: $"<<charges<<endl;
    
    int cost = nmbr_of_room*charges;
    cout<<"Cost: "<<cost<<endl;
    
    cout<<"Tax: $3.6"<<endl;
    cout<<"================================"<<endl;
    cout<<"Total estimate: "<<
    return 0;
}
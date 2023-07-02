#include <iostream>

using namespace std;

int main(){
    
    const double chargeSmallRoom {25};
    const double chargeLargeRoom {35};
    const double saleTax {0.06};
    
    cout<<"Akash Carpet cleaning service"<<endl;
    cout<<"\nCharges: "<<endl;
    cout<<"\t$"<<chargeSmallRoom<<" per small room"<<endl;
    cout<<"\t$"<<chargeLargeRoom<<" per large room"<<endl;
    cout<<"Sales tax rate: "<<saleTax<<endl;
    cout<<"================================"<<endl;
    
    int numberOfSmallRooms {0};
    int numberOfLargeRooms {0};
    double cost {0.0};
    double tax {0.0};
    double totalEstimate {0.0};
    
    cout<<"\nEnter number of small rooms: ";
    cin>>numberOfSmallRooms;
    
    cout<<"Number of large rooms: ";
    cin>>numberOfLargeRooms;
    
    cout<<"\nNumber of small rooms: "<<numberOfSmallRooms<<endl;
    cout<<"Number of large rooms: "<<numberOfLargeRooms<<endl;
    
    cost = (numberOfSmallRooms*chargeSmallRoom) + (numberOfLargeRooms*chargeLargeRoom);
    tax = cost*saleTax;
    cout<<"Cost: $"<<cost<<endl;
    cout<<"Tax: $"<<tax<<endl;

    totalEstimate = cost + tax;
    cout<<"================================="<<endl;
    cout<<"Total estimate: "<<totalEstimate<<endl;
    cout<<"This estimate is valid for 30 days";
    return 0;
}

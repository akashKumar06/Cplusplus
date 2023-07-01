#include<iostream>

using namespace std;

int main(){
    double length {0}, breadth {0};
    cout<<"*****Area of the reactangle*****"<<endl;
    cout<<"Enter length of the room: ";
    cin>>length;
    cout<<"Enter breath of the room: ";
    cin>>breadth;
    double area = length*breadth;
    cout<<"Area of the reactangle: "<<area;
    cout<<endl;
    return 0;
}

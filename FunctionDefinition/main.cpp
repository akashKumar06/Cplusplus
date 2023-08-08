// Function Definition
// Area of cirlce and volume of cylinder
#include <iostream>
#include <cmath>

using namespace std;
const double pi{3.12159};

//function prototypes
double calc_volume_cylinder(double radius, double height);
double calc_area_circle(double radius);
void  area_circle();
void volume_cylinder();


int main(){
    
    area_circle();
    volume_cylinder();
    return 0;
}

double calc_area_circle(double radius){
    return pi*radius*radius;
}

double calc_volume_cylinder(double radius, double height){
    return calc_area_circle(radius)*height;
}

void area_circle(){
    double radius{};
    cout<<"\nEnter the radius of the circle: ";
    cin>>radius;
    
    cout<<"The area of the circle with radius "<<radius<<" is "<<calc_area_circle(radius)<<endl;
}

void volume_cylinder(){
    double radius{};
    double height{};
    cout<<"\nEnter the radius of the cylinder: ";
    cin>>radius;
    
    cout<<"\nEnter the height of the cylinder: ";
    cin>>height;
    
    cout<<"The volume of the cylinder with radius "<<radius << " & height " <<height<<" is "<<calc_volume_cylinder(radius,height)<<endl;
}
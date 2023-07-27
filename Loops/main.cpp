#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    //for loop
    
//    for(int i{1};i<=10;i++){
//        cout<<i<<endl;
//    }
//    for(int i{1};i<=10;i+=2){
//        cout<<i<<endl;
//    }

//    for(int i{10};i>0;i--){
//        cout<<i<<" ";
//    }

//    for(int i{10};i<=100;i+=10){
//        if(i%15 == 0){
//            cout<<i<<" ";
//        }
//    }
//    for(int i{1},j{5};i<=5;i++,j++){
//        cout<<i<<" * "<<j<<" : "<<i*j<<endl;
//    }
//
//    for(int i{1};i<=100;i++){
//        cout<<i<<" ";
//        if(i%10 == 0){
//            cout<<endl;
//        }
//    }

//    for(int i{1};i<=100;i++){
//        cout<<i;
//        cout<<(i%10 == 0 ? "\n" : " ");
//    }

//    vector <int> nums {10,20,30,40,50};
//    for( unsigned int i{0};i<nums.size();i++){
//        cout<<nums[i]<<endl;
//    }
//********************************************************
    //Range-based for loop

//    int scores[] {10,20,30};
    
//    for(int score: scores){
//        cout<<score<<" ";
//    }
//
//    for(auto score: scores){
//        cout<<score<<" ";
//    }
//    
//    vector<double> temperatures {87.9,87.0,79.9,80.0,72.5};
//    double avg_temp{};
//    double total{};
//    for(auto temp: temperatures){
//        total += temp;
//    }
//    if(temperatures.size() != 0){
//        avg_temp = total/temperatures.size();
//    }
//    cout<<fixed<<setprecision(1);
//    cout<<"Average temperature: "<<avg_temp<<endl;

    for(auto c: "Akash Kumar"){
        if(c != ' ')
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}
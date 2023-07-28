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

//    for(auto c: "Akash Kumar"){
//        if(c != ' ')
//        cout<<c<<" ";
//    }

//    int num{};
//    cout<<"Enter a positive integer - start the countdown: ";
//    cin>>num;
//    while(num>0){
//        cout<<num<<endl;
//        int i=0;
//        --num;
//    }
//    cout<<"Blastoff!"<<endl;

//    int number{};
//    cout<<"Enter an integer less than 100: ";
//    cin>>number;
//    
//    while(number >= 100){
//        cout<<"Enter an integer less than 100: ";
//        cin>>number;
//    }

//    char selection{};
//    cout<<"------------------------------"<<endl;
//    do{
//        cout<<"1. Do this"<<endl;
//        cout<<"2. Do that"<<endl;
//        cout<<"3. Do something else"<<endl;
//        cout<<"Q: Quit"<<endl<<endl;
//        cout<<"Enter your selection: ";
//        cin>>selection;
//        switch(selection){
//            case '1':
//                cout<<"\nYou chose 1 - Do this"<<endl;
//                break;
//            case '2':
//                cout<<"\nYou chose 2 - Do that"<<endl;
//                break;
//            case '3':
//                cout<<"\nYou chose 2 - Do that"<<endl;
//                break;
//            case 'Q':
//            case 'q':
//                break;
//            default:
//                cout<<"\nUnknown Option try again...."<<endl;
//        }
//    }while(selection !='q' && selection != 'Q');
//    cout<<"Thanks";

//    while(true){
//        char again{};
//        cout<<"Do you to continue(Y/N): ";
//        cin>>again;
//        
//        if(again == 'N' || again =='n'){
//            break;
//        }
//    }
    int k{1};
    int pro{0};
    for(int i=1;i<=10;i++){
        if(pro == 50){
            k=6;
        }else{
            k=1;
        }
        for(int j=1;j<=5 || k<=10;j++,k++){
            pro = i*j;
            cout<<j<<" X "<<i<<" = "<<pro<<"\t";
            if(pro==6){
                cout<<"\n";
            }
        }
    cout<<endl;
    }
    cout<<endl;
    return 0;
}
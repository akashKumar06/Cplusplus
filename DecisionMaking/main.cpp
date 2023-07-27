#include <iostream>

using namespace std;

int main(){
//    int num {};
//    const int min {10};
//    const int max {100};
//
//    cout<<"Enter a number between "<<min<<" and " <<max<<" : ";
//    cin>>num;
//    
//    if(num >= min){
//        cout<<"\n============ if statement 1 ============="<<endl;
//        cout<<num<<" is greater than "<<min<<endl;
//        
//        int diff = num - min;
//        cout<<num<<" is "<<diff<<" greater than "<<min;
//    }
//    
//    if(num <= max){
//        cout<<"\n============ if statement 2 ============="<<endl;
//        cout<<num<<" is less than "<<max<<endl;
//        
//        int diff = max - num;
//        cout<<num<<" is "<<diff<<" less than "<<max;
//    }
//    
//    
//    if(num >= min && num <= max){
//        cout<<"\n============ if statement 3 ============="<<endl;
//        cout<<num<<" is in range "<<endl;
//        
//        cout<<"This means statements 1 and 2 must also display!!!"<<endl;
//    }
//    

    int score {};
    cout<<"Enter your score on the exam (0-100) : ";
    cin>> score;
    char letter_grade {};
    
    if(score >= 0 && score <=100){
        if(score > 90)
            letter_grade = 'A';
        else if(score > 80)
            letter_grade = 'B';
        else if(score > 70)
            letter_grade = 'C';
        else if(score > 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';
    }
    cout<<"Your grade is: "<<letter_grade<<endl;
    
    if(letter_grade == 'F')
        cout<<"Sorry you must repeat this class"<<endl;
    else
        cout<<"you passed with grade: "<<letter_grade<<endl;
    cout<<endl;
    return 0;
}
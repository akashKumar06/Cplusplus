#include <iostream>

using namespace std;

int main(){
    char letter_grade {};
    
    cout<<"Enter the letter grade you expect on the exam: ";
    cin>>letter_grade;
    
    switch(letter_grade){
        case 'a':
        case 'A':
            cout<<"You need a 90 above, study hard!"<<endl;
            break;
        case 'b':
        case 'B':
            cout<<"You need 80 - 89 for B, go Study!"<<endl;
            break;
        case 'c':
        case 'C':
            cout<<"You need 70 - 79 for an average grade"<<endl;
            break;
        default:
            cout<<"Yup you got nothing";
    }
    cout<<endl;
    return 0;
    
}

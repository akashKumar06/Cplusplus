#include <iostream>
using namespace std;

int main(){
    
    /****************************
     * Character types
     *****************************/
     char middle_initial {'A'};
     cout<<"My middle initial is: "<<middle_initial<<endl;
     
     /***************************
      * Integer Types
      **************************/
      unsigned short int exam_score {55};
      cout<<"My exam score was: "<<exam_score<<endl;
      
      int countries_represented {65};
      cout<<"There were "<<countries_represented<<" countries represented in my meeting"<<endl;
      
      long people_in_florida {2061000};
      cout<<"There are about "<<people_in_florida <<endl;
      
      long long people_on_earth {7600000000};
      cout<<"There are about "<<people_on_earth<<" people in earth"<<endl;
      
      /*********************************
       * Boolean Types
       ********************************/ 
       bool game_over {true};
       cout<<"The value of the gameOver is: "<<game_over<<endl;
       
       /*******************************
        * Overflow example
        ********************************/ 
        short value1 {30000};
        short value2 {1000};
        short product {value1*value2};
        cout<<"The product of "<<value1 <<" and "<<value2<<" : "<<product;
        
    return 0;
}
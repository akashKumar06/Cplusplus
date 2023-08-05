//Random Numbers
#include <iostream>
#include <cstdlib>  // required for rand()
#include <ctime>    // requied for time()

using namespace std;

int main(){
    
    int random_number{};
    size_t count{10}; //number of random numbers to generate
    int min{1}; //lower bound(inclusive)
    int max{6}; //upper bound(inclusive)
    
    //seed the random number generator
    //if you don't seed the generator you will get the same sequence random number every run
    
    cout<<"RAND_MAX on my system is: "<<RAND_MAX<<endl;
    cout<<"Time: "<<time(nullptr);
    srand(time(nullptr)); //seeding the random number generator
    
    //rand() -> this function generates random number between 0 and RAND_MAX
    for(size_t i{1};i<=count;i++){
        random_number = rand()%max + min; //generate a random number [min,max];
        cout<<random_number<<endl;
    }
    
    cout<<endl;
    return 0;
}
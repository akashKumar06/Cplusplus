#include <iostream>

using namespace std;

int main(){
    /*
      increment operator ++
      decrement operator --
      
       * Increment or decrements its operand by 1
       * Can be used with integers, floating point types and pointers
       * 
       * prefix ++num
       * postfix num++
       * 
       * dont't overuse this operand
       * ALERT!! Never use it twice for the same variable in the same statement
     */
    int counter {10};
    int result {0};
    
//    Example 1 - simple increment
    counter += 1;
    cout<<"Counter: "<< counter<<endl;
    
    counter++;
    cout<<"Counter: "<< counter<<endl;
    
    ++counter;
    cout<<"Counter: "<< counter<<endl;
    
//    Example 2 - preincrement
    counter = 10;
    result = 0;
    
    cout<<"Counter: "<<counter<<endl;
    
    result = ++counter;
    cout<<"Counter: "<<counter<<endl;
    cout<<"Result: "<<result<<endl;
    
//    Example 3 - post-increment
    counter = 10;
    result = 0;
    result = counter++;
    cout<<"Counter: "<<counter<<endl;
    cout<<"Result: "<<result<<endl;
    
//    Exapmle 4
    counter = 10;
    result = 0;
    
    cout<<"Counter: "<<counter<<endl;
    
    result = ++counter + 10;
    cout<<"Result: "<<result<<endl;
    
//    Example 5
    counter = 10;
    result = 0;
    
    cout<<"Counter: "<<counter<<endl;
    
    result = counter++ + 10;
    
    cout<<"Counter: "<<counter<<endl;
    cout<<"Result: "<<result<<endl;

    cout<<endl;
    return 0;
    
}
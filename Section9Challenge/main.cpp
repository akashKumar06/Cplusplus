#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    char choice{};
    vector<int> numbers{};
    do{
        cout<<"P. Print numbers"<<endl;
        cout<<"A. Add a number"<<endl;
        cout<<"M. Display mean of the numbers"<<endl;
        cout<<"S. Display the smallest number"<<endl;
        cout<<"L. Display the largest number"<<endl;
        cout<<"Q. Quit"<<endl;
        if(numbers.size() == 0){
                cout<<"No numbers to show... please add any number"<<endl;
        }
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 'p':
            case 'P':{
                cout<<"Numbers are: ";
                for(auto num: numbers){
                    cout<<num<<" "<<endl;
                }
                cout<<endl;
                break;
            }
            case 'a':
            case 'A':{
                int num = 0;
                cout<<"Enter a number: ";
                cin>>num;
                numbers.push_back(num);
                cout<<endl;
                break;
            }
            case 'm':
            case 'M':{
                double mean{};
                double total{};
                for(auto num: numbers){
                    total += num;
                }
                mean = total/numbers.size();
                cout<<"Mean of the numbers: "<<mean<<endl;
                break;
            }
            case 's':
            case 'S':{
                int small_number = numbers.at(0);
                for(auto num: numbers){
                    if(num <= small_number){
                        small_number = num;
                    }
                }
                cout<<"Smallest number: "<<small_number<<endl;
                break;
            }
            case 'l':
            case 'L':{
                int large_number = numbers.at(0);
                for(auto num: numbers){
                    if(num >= large_number){
                        large_number = num;
                    }
                }
                cout<<"Smallest number: "<<large_number<<endl;
                break;
            }
            case 'q':
            case 'Q':
                break;
            default:
                cout<<"Unknown selection, please try again";
        }
    }while(choice !='q' && choice !='Q');
    return 0;
}
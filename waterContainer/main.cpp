#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> height {1,8,6,2,5,4,8,3,7};
    vector<int> final_max_area;
    
    int final_area {0};
    
    for(unsigned i=0;i<height.size();i++){
        int max_area{0};
        for(unsigned j=0;j<height.size();j++){
            if(height.at(j) >= height.at(i)){
                int dist = 0;
                if(i<=j){
                    dist = j - i;
                }else{
                    dist = i - j;
                }
                int area = height.at(i)*dist;
                if(area >= max_area){
                    max_area = area;
                }
               
            }
        }

        if(max_area >= final_area){
            final_area = max_area;
        }
    
    }

    cout<<"Maximum Area: "<<final_area<<endl;
    return 0;
}


        
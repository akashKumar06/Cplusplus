#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    int T{};
	cin>>T;
	
	int N{};
	string S{};
    char str[7]{};
	for(int i=0;i<T;i++){
	    cin>>N;
	    cout<<"Enter a string: ";
        cin.getline(str,N);
	    string A = S.substr(0,N/2);
        cout<<A;
	    string B = S.substr(N/2);
        cout<<B;
	    if((A + B == S) && (B + A == S)){
	        cout<<"YES";
	    }else{
	        cout<<"NO";
	    }
	}
//	int testCase{};
//	string hidden_word{};
//	string guess_word{};
//	cout<<"Enter number of test cases: ";
//	cin>>testCase;
//    cout<<sizeof(testCase);
//	for(int i{0};i<testCase;i++){
//        cout<<"Enter hidden word: ";
//        cin>>hidden_word;
//        
//        cout<<"Enter guess word: ";
//        cin>>guess_word;
//        
//	    string predicted_word{};
//	    for(size_t j=0;j<guess_word.length();j++){
//            cout<<"guess_word["<<j<<"] : "<<guess_word[j]<<endl;
//            cout<<"hidden_word["<<j<<"] : "<<hidden_word[j]<<endl;
//	       if(guess_word[j] == hidden_word[j]){
//	           predicted_word += "G";
//	       }else{
//	           predicted_word += "B";
//	       }
//           cout<<"\npredicted word: "<<predicted_word;
//	    }
//	    cout<<predicted_word<<endl;
//	}
    return 0;
}
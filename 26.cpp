// Remove duplicate elements from the array . LC = 26

// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Sorted{
    public : 
    vector<int> removeDuplicates(const vector<int> num){
        set<int> uniqueSet;
        vector<int> uniqueVector;
        int i = 0;
        
        for(i = 0; i< num.size(); i++){
            uniqueSet.insert(num[i]);
        }
        
        for(const int& ele: uniqueSet){
            uniqueVector.push_back(ele);
        }
        return uniqueVector;
    }    
};

int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    Sorted s;
    int i = 0, len = 0;
    vector<int> arr = {1,2,3,3,4,4,5,1};
    vector<int> results = s.removeDuplicates(arr);
    
    for(i = 0 ; i < results.size(); i ++){
        cout << results[i] << endl;   
    }
    return 0;
}

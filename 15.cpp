// Triple sum or three sum problem in C++

// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

class threeSums{
    public :
    vector<vector<int>> tripletSum(vector<int> num, int target){
        int n = num.size();
        int i = 0, j = 0, k = 0;
        int sum = 0;
        set<vector<int>> uniqueSet;
        vector<vector<int>> result;
        
        sort(num.begin(), num.end());
        for(i = 0 ; i< n; i++){
            j = i+1;
            k = n-1;
            while(j<k){
                sum = num[i] + num[j] + num[k];
                if (sum == target){
                    uniqueSet.insert({num[i], num[j], num[k]});
                }
                else if (sum < target){
                    j++;
                }
                else {
                    k--;
                }
            }
        }
        for(auto t:uniqueSet){
            cout << "[" << t[0] << "," << t[1] << "," << t[2]<< "]" << endl;
            result.push_back(t);
        }
        
        return result;
    }
};

int main(){
    threeSums obj;
    vector<int> arr = {1,2,3,4,-5};
    int target = 0;
    
    vector<vector<int>> r = obj.tripletSum(arr, target);
    
    return 0;
}

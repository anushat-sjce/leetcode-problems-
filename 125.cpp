class Solution {
public:
    bool isPalindrome(string s) {
        int len = 0;
        bool flag = false;
        len = s.size();
        int i = 0;

        for(i = 0; i< s.size() ; i++){
            s[i] = tolower(s[i]);
            cout << s[i];
        }
        i = 0;
        int j = len -1;
        while(i <= j) {
            while(i <= j) { 
                if(isalpha(s[i]) && (isalpha(s[j]))){
                    if (s[i] == s[j]){
                        i++;
                        j--;
                    } else {
                        return false;
                    }
                }
                if(isdigit(s[i]) && (isdigit(s[j]))){
                    if (s[i] == s[j]){
                        i++;
                        j--;
                    } else {
                        return false;
                    }
                }
            }
        }  
       return true;
    }
};

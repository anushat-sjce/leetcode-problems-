//Valid anagram or not in C++

class Solution {
public:
    bool isAnagram(string s, string t) {
        int i = 0;
        int freq[256] = {0};

        if(s.length() != t.length()){
            return false;
        }
        
        for(i = 0; i < s.length(); i++){
            freq[s[i]]++;
        }

        for(i = 0; i < t.length(); i++){
            freq[t[i]]--;
        }

        for(i = 0; i < 256; i++){
            if(freq[i] != 0){
                return false;
            }
        }
        return true;
    }
};

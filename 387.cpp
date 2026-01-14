//First unique character in the string

class Solution {
public:
    int firstUniqChar(string s) {
        int freq[256] = {0};
        int i = 0;

        for(i = 0 ; i < s.length(); i++){
            freq[s[i]]++;
        }
        for(i = 0; i < s.length(); i++){
            if (1 == freq[s[i]]){
                printf("First unique character found\n");
                return i;
            }
        }
        return -1;
    }
};

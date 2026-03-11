class Solution {
public:
    bool isPalindrome(string s) {
        string filtered_str;
        for(char c: s){
            if(isalnum(c)){
                filtered_str+=tolower(c);
            }
        }

        int l=0,r=filtered_str.size()-1;
        while(l<r){
            if(filtered_str[l]!=filtered_str[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
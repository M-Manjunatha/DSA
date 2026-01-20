class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];

        for(auto& p: strs){
            int i=0;
            while(i<s.size() && i<p.size()&&p[i]==s[i]){
            i++;
            }
            s=s.substr(0,i);

        }
        if(s.empty()) return "";
        else return s;
    }
};
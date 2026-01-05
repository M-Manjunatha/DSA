// class Solution {
// public:
//     bool isPalindrome(int x) {
//         if(x<0) return false;

//         long rev=0, num=x;
//         while(num){
//             rev=rev*10+num%10;
//             num=num/10;
//         }
//         return rev==x;
        
//     }
// };

//Another Method that can convert from std::string
#include <algorithm>
#include<string>
class Solution {
public:
    bool isPalindrome(int x) {
       std::string s=std::to_string(x); //convert int to string
       std::reverse(s.begin(),s.end()); //reverse the string
       int y=std::stoll(s);
       if(y==x){
        return true;
       }else return false;
        
    }
};

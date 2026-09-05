class Solution {
public:
    string func(string &a){
        string ans="";
        for(char ch : a){
            if(isalnum(ch)){
                ans += tolower(ch);
            }

            
        }
        return ans;
    }
    bool isPalindrome(string s) {
        string t=func(s);
        int x=0;
        int e=t.size()-1;
        while(x<e){
            if(t[x] != t[e]){
                return false;
            }
            x++;
            e--;
        }
        return true;
        
    }
};

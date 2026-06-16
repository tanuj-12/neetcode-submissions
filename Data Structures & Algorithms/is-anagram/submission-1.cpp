class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> fre(26);
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            fre[s[i]-'a']++;
            fre[t[i]-'a']--;
        }
        for(auto x:fre){
            if(x!=0) return false;
        }
        return true;
        
    }
};

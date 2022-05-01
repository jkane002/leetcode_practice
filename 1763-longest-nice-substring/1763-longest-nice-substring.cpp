class Solution {
public:
    string longestNiceSubstring(string s) {
        // uses recursion "YazaAay" 
        // Yaz|aAa|y set is YazAy | azAy
        
        
        if(s.length() < 2) return "";
        
        set<char> st(s.begin(), s.end());
        
        for(int i = 0; i < s.length(); ++i) {
             if (st.find((char) toupper(s[i])) == end(st) || st.find((char) tolower(s[i])) == end(st)) {
                string s1 = longestNiceSubstring(s.substr(0,i));
                string s2 = longestNiceSubstring(s.substr(i+1));
                return s1.size() >= s2.size() ? s1:s2;
            }
        }
        return s;
    }
};
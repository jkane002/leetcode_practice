class Solution {
public:
    int lengthOfLastWord(string s) {
        // Hello World
        // hello world (reaches end or a space)
        // [hello, world]
        // last el.length()
        vector<string> vec;
        string temp = "";
        for(int i = 0; i < s.length(); ++i) {
            if(s[i] != ' ' ) {
                temp+=s[i];
            } else {
                if(temp.length() > 0)
                    vec.push_back(temp);
                
                temp = "";
            }
            
        }
        if(temp.length()>0)
            vec.push_back(temp);
        
        return vec[vec.size()-1].length();
    }
};
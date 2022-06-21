class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans = -1;
        int sizeOfHaystack = haystack.size();
        
        if(needle == "") return 0;
        // needle is part of haystack
        // ll, hello
        for(int i = 0; i < sizeOfHaystack; ++i) {
            string temp = "";
            for(int j = 0; j < needle.size(); ++j) {
                if(i+j >= sizeOfHaystack)
                    return -1;
                temp += haystack[i+j];
                
            }
            if(temp == needle)
                return i;
        }
        
        return ans;
    }
};
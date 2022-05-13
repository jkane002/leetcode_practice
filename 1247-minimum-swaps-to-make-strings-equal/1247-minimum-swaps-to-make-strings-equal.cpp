class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int xy_pair = 0;
        int yx_pair = 0;
        
        for(int i = 0; i < s1.size(); ++i) {
            if(s1[i] == 'x' && s2[i] == 'y') {
                xy_pair++;
            } else if(s1[i] == 'y' && s2[i] == 'x') {
                yx_pair++;
            } 
        }
        
        int sum = (xy_pair + yx_pair);
        if(sum % 2)
            return -1;
        
        return (xy_pair/2 + yx_pair/2 + xy_pair % 2 + yx_pair % 2);
        
        
        // add both, divide by 2 add xy%2 yx%2 return that num
        // if(sum % 2) return -1

        /*
        int ct = -1;
          s1 = xx  2x's
          s2 = yy  2y's
          
          xyx yxx
          
          
        s1 xy 
        s2 yx
         
         xy = 1 
         yx = 1 
         
         add both, divide by 2
         xx = 0
         yy = 0
         
         
         xx
         xy
         
         xy =1, odd pairing 
         yx = 0 odd, -1
          
          
          */
    }      
};
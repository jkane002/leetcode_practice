class Solution {
public:
    vector<int> sumZero(int n) {
        // n,n,n,n,n
        // -, -, 0, +,+
        // -9, -2, 4, 2, 5
        
        // n = 5
        // -2 -1 0 1 2
        
        // n=6
        // -3 -2 -1 1 2 3
        
        //n = 7
        
        /*
        iterating thru n = 5
            
            4, 5, 0 , -4, -5
        
        */
        vector<int> arr(n, 0);
        
        for(int i = 0; i < n/2; i++) {
            arr.at(i) = -(i + 1);
            arr.at(n-i-1) = i+1;
        }
        
        return arr;
    }
};
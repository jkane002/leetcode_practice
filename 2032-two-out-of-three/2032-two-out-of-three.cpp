class Solution {
public:
     set<int> setConversion(vector<int>& v) {
        
        set<int> myset;
        for(int i= 0; i < v.size(); ++i) {
            myset.insert(v[i]);
        }
        
        return myset;
    }
    
    void findInHash(set<int>& s, unordered_map<int,int>& hashmap) {
        for(auto& i: s) {
            if ( hashmap.find(i) == hashmap.end()) {
                hashmap.insert( { i, 1 } );
            } else {
                hashmap[i] +=1;
            }
        }
    }
    
    
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        /*
        
        nums1 = [1,1,3,2], nums2 = [2,3], nums3 = [3]
        
        1. hashmap -> key , val
        2. hash function -> 
        3. key, elements in nums1, num2/3, vals how many times they occur
        4. iterate hashmap, check if vals >= 2 store in vector, 
        5. return vec
        */
        unordered_map<int, int> hashmap;
        vector<int> ans;
        
        // converting nums1,2,3 into sets
        set<int> one = setConversion(nums1);
        set<int> two = setConversion(nums2);
        set<int> three = setConversion(nums3);

        findInHash(one, hashmap);
        findInHash(two, hashmap);
        findInHash(three, hashmap);
        
        
        // iterate hashmap, find vals >= 2, then store in vector
        for (const auto & [ key, value ] : hashmap) {
            if ( value >= 2) {
                ans.push_back(key);
            }
        }
        
        
        return ans;
    }
};
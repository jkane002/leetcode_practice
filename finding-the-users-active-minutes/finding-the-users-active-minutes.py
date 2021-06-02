from collections import defaultdict

class Solution:
    def findingUsersActiveMinutes(self, logs: List[List[int]], k: int) -> List[int]:
        # initialize set
        uam = defaultdict(set)
        ans = [0]*k
        
        # add unique values to set
        for user_id, time in logs:
            uam[user_id].add(time)
        
        # each item in set, get length -1 for the index
        # plus 1 to increment defaultdict count
        for i in uam:
            ans[len(uam[i])-1] += 1
        
        return ans
'''
N is input size, then
Time Complexity: O(N)
Space Complexity: O(max(K, N))
'''
    
        
        
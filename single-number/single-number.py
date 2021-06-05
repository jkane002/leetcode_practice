from collections import defaultdict

class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        duplicates = list()
        for i in nums:
            if i not in duplicates:
                duplicates.append(i)
            else:
                duplicates.remove(i)
        return duplicates.pop()
    
#     stack-like data structure
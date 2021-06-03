class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        maxWealth = 0
        for customer in accounts:
            if sum(customer) > maxWealth:
                maxWealth = sum(customer)
        return maxWealth
#     O(Mxn), mxn grid
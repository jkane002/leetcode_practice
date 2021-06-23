class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        '''
        [7,1,5,3,6,4] 7
        
        if 7 < 1, no
        if 1 < 5, yes
            profit += (i, i+1)
        if 5 < 3, no
        if 3 < 6, yes
            profit = max(profit,(i, i+1))
        '''
        profit = 0
        length = len(prices)-1
        for i in range(length):
            if prices[i] < prices[i+1]:
                profit += (prices[i+1] - prices[i])
                
        return profit
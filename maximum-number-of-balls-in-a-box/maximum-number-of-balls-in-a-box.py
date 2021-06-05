from collections import defaultdict

class Solution:
    def countBalls(self, lowLimit: int, highLimit: int) -> int:
        sumOfDigits = defaultdict(int)
        
        for num in range(lowLimit, highLimit+1):
            digitSum = 0
            
            for digit in str(num):
                digitSum += int(digit)
            
            sumOfDigits[digitSum] += 1
        return max(sumOfDigits.values())
    
        '''
        defaultdict -> count, dictionary
        build as you go

        5 -> strip digits, add them together
        insert in defaultdict [sum(digits), count]
        sumDigits[sum(digits)] += 1

        return max(sumDigits.values())
            '''
            
            
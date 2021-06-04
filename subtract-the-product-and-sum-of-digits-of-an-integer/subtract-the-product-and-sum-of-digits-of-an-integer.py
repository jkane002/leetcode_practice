class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        product_n = 1
        sum_n = 0
        while n > 0:
            sum_n += (n % 10)
            product_n *= (n % 10)
            n //= 10
            
        return product_n - sum_n
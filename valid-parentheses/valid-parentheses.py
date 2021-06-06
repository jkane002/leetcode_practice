class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        dictionary = {']':'[', '}':'{', ')':'('}
        
        for char in s:
            if char in dictionary.values():
                stack.append(char)
            else:
                if stack == [] or dictionary[char] != stack[-1]:
                    # bc need opening bracket
                    return False
                if dictionary[char] == stack[-1]:
                    stack.pop()
        return stack == []
                    
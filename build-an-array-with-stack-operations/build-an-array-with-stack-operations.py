class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        tempArray = []
        pushPoparr = []
        
        for i in range(1,n+1):
            if tempArray == target:
                break
            else:
                pushPoparr.append("Push")
                tempArray.append(i)
                if i not in target:
                    pushPoparr.append("Pop")
                    tempArray.pop()
                    
        return pushPoparr
        
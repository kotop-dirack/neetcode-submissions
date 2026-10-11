class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        mas = []
        flag = False
        for i in matrix:
            for j in i:
                mas.append(j)
        l = 0
        r = len(mas)-1
        while (l <= r):
            mid = (l+r)//2
            if mas[mid] == target:
                return True
                flag = True
                break
            elif mas[mid] > target:
                r = mid-1
            else:
                l = mid+1  
        if flag == False:
            return False              

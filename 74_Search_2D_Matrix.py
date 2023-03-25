from typing import List

def searchMatrix(matrix: List[List[int]], target: int) -> bool:
    for i in range(len(matrix)):
        if(target>=matrix[i][0] and target<=matrix[i][len(matrix[i])-1]):
            for j in range(len(matrix[i])):
                if(matrix[i][j]==target):
                    return True
    return False

print(searchMatrix([[1,3,5,7],[10,11,16,20],[23,30,34,60]], 13))
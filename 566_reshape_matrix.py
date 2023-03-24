from typing import List

def matrixReshape(mat: List[List[int]], r: int, c: int) -> List[List[int]]:
    flattened = []
    for i in mat:
        for j in i:
            flattened.append(j)
    
    if(len(flattened)==r*c):
        new_mat = []
        for i in range(r):
            indiv_row = []
            for j in range(c):
                indiv_row.append(flattened[i*c+j])
            new_mat.append(indiv_row)
            indiv_row = []
        return new_mat

    return mat

mat = [[1,2], [3,4]]
output = matrixReshape(mat, 2, 4)

print(output)
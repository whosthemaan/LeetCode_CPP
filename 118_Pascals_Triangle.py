from typing import List

def generate(numRows: int) -> List[List[int]]:
    final_result = []
    for i in range(1, numRows+1):
        sample_init = [1] * i
        if i>2:
            for j in range(1, i-1):
                sample_init[j] = final_result[i-2][j-1] + final_result[i-2][j]
        final_result.append(sample_init)
    return final_result
        
numRows = 1
final = generate(numRows)
print(final)

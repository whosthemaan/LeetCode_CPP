from typing import List

def isValidSudoku(board: List[List[str]]) -> bool:
    for col in range(9):
        lis = []
        for row in range(9):
            if board[col][row]!=".":
                lis.append(board[col][row])
        for check in range(1, 10):
            val = "\'" + str(check) + "\'"
            if(lis.count(val)>1):
                return False

    for col in range(9):
        lis = []
        for row in range(9):
            if board[row][col]!=".":
                lis.append(board[row][col])
        for check in range(1, 10):
            print(check, lis.count(str(check)))
            if(lis.count(str(check))>1):
                return False 

    for row in range(3):
        for col in range(3):
            flattened = []
            for i in range(row*3, row*3+3):
                for j in range(col*3, col*3 + 3):
                    flattened.append(board[i][j])
            for i in range(1, 10):
                if(flattened.count(str(i))>1):
                    return False
            flattened = []
   
    return True

board = [[".",".",".","8",".",".",".",".","."]
 ,[".",".",".",".",".",".",".",".","."]
 ,[".","6",".",".",".",".","3",".","."]
 ,["7",".",".","9","6","4","1",".","."]
 ,["6",".","9",".",".",".",".",".","."]
 ,[".",".",".",".",".",".",".","5","."]
 ,[".",".","9",".",".",".",".",".","."]
 ,[".",".",".",".",".",".",".",".","5"]
 ,[".",".","1",".",".",".",".","2","."]]

print(isValidSudoku(board))


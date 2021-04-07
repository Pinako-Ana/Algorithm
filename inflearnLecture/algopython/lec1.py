# def sum(n,S):
#     result = 0
#     for i in range(0, n):
#         result += S[i]
#     return result

# S = [-1,10,7,11,5,13,8]
# sum = sum(7,S)
# print('sum =%d' % sum)



# def exchangesort(S):
#     n = len(S)
#     for i in range(0,n-1):
#         for j in range(i+1,n):
#             if S[i] > S[j]:
#                 S[i], S[j] = S[j], S[i]
#         print(S)

# S = [-1,3,62,31,4,2,85,3,4]
# exchangesort(S)

# def matrixmultiple(n, A, B):
#     n = len(A)
#     C = [[0] * n for _ in range(n)]
    
#     for i in range(n):
#         for j in range(n):
#             for k in range(n):
#                 C[i][j] += A[i][k] * B[k][j]

#     return C        

# A = [[2,4],[4,1]]
# B = [[3,7],[9,6]]
# result = matrixmultiple(2,A,B)
# print(result)
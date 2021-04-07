###########BINARY SEARCH############
# def binary_search(S, low, high):
#     if(low > high):
#         return 0
#     else:
        
#         mid = int((low + high)/2)
#         print(low,mid,high)
#         if(x == S[mid]): return mid;
#         elif(x < S[mid]): return binary_search(S, low, mid-1)
#         else: return binary_search(S,mid+1,high)
    
# S= [-1,3,4,5,7,8,9,15,44,85,140]
# x = 10
# loc = binary_search(S,1,len(S)-1)

# print('S = ', S)
# print('x = ', x)
# print('x\'s loc = ', loc)


##########MERGESORT###########

# def merge(U,V):
#     S =[]
#     i = j = 0
#     while(i < len(U) and j < len(V)):
#         if(U[i] < V[j]):
#             S.append(U[i])
#             i += 1
#         else:
#             S.append(V[j])
#             j += 1
#     if i < len(U):
#         S += U[i:len(U)]
#     else:
#         S += V[j:len(V)]
#         #리스트 합치기임
    
#     return S

# def mergesort(S):
#     n = len(S)
#     if n <= 1:
#         return S
#     else:
#         mid = n // 2
#         U = mergesort(S[0 : mid])
#         V = mergesort(S[mid : n])
#         print("U = ", U)
#         print("V = ", V)
#         return merge(U,V)


def merge2(S, low, mid, high):
    U =[]
    i = low
    j = mid + 1
    while(i <= mid and j <= high):
        if(S[i] < S[j]):
            U.append(S[i])
            i += 1
        else:
            U.append(S[j])
            j += 1
    if i <= mid:
        U += S[i:mid +1]
    else:
        U += S[j : high +1]

    for k in range(low, high + 1): 
        S[k]  = U[k - low]
        
def mergesortver2(S, low, high):
    if(low < high):
        mid = (low + high)//2
        mergesortver2(S,low,mid)
        mergesortver2(S,mid+1, high)
        merge2(S,low,mid,high)
    


        
S = [2,4,8,5,627,37,23,76,9,12,35,282]
print('Before ms = ', S)
mergesortver2(S,0,len(S))
print("After ms = ",S)






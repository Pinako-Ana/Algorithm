n = int(input())
dp = [0 for _ in range(n+2)]
dp[0] = 0
dp[1] = 1
dp[2] = 2
for i in range(3,n+1):
	dp[i] = (dp[i-2] + dp[i-1]) % 15746
print(dp[n])
# C++이 더 빠르긴 함
# 메모리도 훨씬 많이 씀
MOD = 1000007

def maxBooksOnShelf(n, heights):
    dp = [0] * (n + 1)
    ans = 0

    for i in range(n):
        max_height = 0
        dp[i + 1] = dp[i]

        for j in range(i, -1, -1):
            max_height = max(max_height, heights[j])
            if max_height < j + 1:
                break

            dp[i + 1] = max(dp[i + 1], dp[j] + 1)

        ans = max(ans, dp[i + 1])

    return ans % MOD

# Sample input
n = 6
heights = [9, 9, 9, 9, 9, 9]

result = maxBooksOnShelf(n, heights)
print(result)  # Output: 1

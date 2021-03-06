/**
 * Description: Find longest length palindromic subsequence in s[i..j]
 * Usage: See below O(V^2) 
 * Source: https://github.com/dragonslayerx 
 */

void process(const string &s, int last[][30]) {
        int n = s.size();
        for (int j = 0; j < 26; j++) {
            if (j==s[0]-'a') {
                last[0][j] = 0;
            } else {
                last[0][j] = -1;
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < 26; j++) {
                last[i][j] = last[i-1][j];
            }
            last[i][s[i]-'a'] = i;
        }

}

int last[1005][30];
int dp1[1005][1005]
process(s, last);
memset(dp1, 0, sizeof(dp1));
for (int i = 0; i < n; i++) dp1[i][i] = 1;
for (int i = n-1; i >= 0; i--) {
	for (int j = i+1; j < n; j++) {
		dp1[i][j] = 1;
		dp1[i][j] = max(dp1[i][j], dp1[i+1][j]);
		if (last1[j][s1[i]-'a'] > i) {
			dp1[i][j] = max(dp1[i][j], 2 + dp1[i+1][last1[j][s1[i]-'a']-1]);
		}
	}
}
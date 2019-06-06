#!/usr/bin/env python2.7
s = raw_input()
n = len(s)
ans = 0
tab = {}

for i in range(n):
	tmp = 0;
	for j in tab.keys():
		tmp = (tab[j] if (j <= s[i] and tab[j] > tmp) else tmp)
	tab[s[i]] = tmp + 1
	ans = tab[s[i]] if tab[s[i]] > ans else ans

print ans

 ############################################################################
 # Arthur Pratti Dadalto
 # OBI 2015 - letras
 # programacao dinamica - LIS
 ############################################################################

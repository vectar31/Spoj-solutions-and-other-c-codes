t=input()
for i in range (0,t):
	n, m = map(int, raw_input().split())
	print '%d.00' % ((2**(n+1))-(2**(m+1)))
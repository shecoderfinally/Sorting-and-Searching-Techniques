import sys
f = open(sys.argv[1], 'r')
t = int(f.readline().rstrip())

def solve(c, d):
    if (c-d) %2 == 1:
        return -1
    if ((c == 0) and (d == 0)):
        return 0
    if (c == d):
        return 1
    else:
        return 2

for i in range (t):
  test_case = [int(x) for x in (f.readline().rstrip()).split()]
  c = test_case[0]
  d = test_case[1]

  print(solve(c, d))

f.close()

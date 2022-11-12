import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    hero = input().rstrip().lower()
    g = hero.count('g')
    b = hero.count('b')
    if g > b:
        print(f'{hero} is GOOD')
    elif g < b:
        print(f'{hero} is A BADDY')
    else:
        print(f'{hero} is NEUTRAL')
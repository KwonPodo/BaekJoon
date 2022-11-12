n = int(input())
votes = input()
a = votes.count('A')
b = votes.count('B')

print('A' if a > b else 'B' if a < b else 'Tie')
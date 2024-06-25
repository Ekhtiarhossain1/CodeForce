n = int(input())

words = []

for _ in range(n):
    words.append(input())

for word in words:
    if len(word) > 10:
        long_word = word[0] + str(len(word) - 2) + word[-1]
        print(long_word)
    else:
        print(word)

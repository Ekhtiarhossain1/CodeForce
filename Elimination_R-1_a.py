people = input()

votes = input().split()

hard = False
for el in votes:
    if int(el) == 1:
        hard = True
        break

if(hard):
    print("HARD\n")
else:
    print("EASY\n")

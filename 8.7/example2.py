from random import randint

arrayData = []
total = 0

for x in range(1, 101):
    arrayData += [randint(0, 25565)]

for count in range(0, 100):
    total = total + arrayData[count]

print(str(total))
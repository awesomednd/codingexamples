from random import randint

arrayData = []

for y in range(1, 101):
    arrayData += [randint(0, 25565)]


number = 0
count = 0
while number < 10:
    dataInArray = arrayData[count]
    count = count + 1
    if dataInArray >= 100:
        number = number + 1
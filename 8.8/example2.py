from random import randint
arrayData = []

for y in range(1, 101):
    arrayData += [randint(0, 25565)]

count = 0 
for x in range(0, 100):
    if arrayData[x] > 50:
        count = count + 1

print("count is ", count)
import random
import time

start = time.time()

array = []

for _ in range(10):
    array.append(random.randint(1, 100))

print(array)

for i in range(len(array)):
    min_i = i
    for j in range(i + 1, len(array)):
        if array[min_i] > array[j]:
            min_i = j

    array[i], array[min_i] = array[min_i], array[i]

end = time.time()
print(f'걸린 시간: {round(end - start, 2)}초')
print(array)
            


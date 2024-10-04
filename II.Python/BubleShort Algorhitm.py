array = [2, 5, 8, 4, 1, 7, 10, 3, 6, 9]
temp = 0

for i in range(len(array) - 5):
    for j in range(len(array) - i - 1):
        if array[j] > array[j + 1]:
            temp = array[j]
            array[j] = array[j + 1]
            array[j + 1] = temp
            
print(array)
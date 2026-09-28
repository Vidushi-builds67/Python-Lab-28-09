def even_numbers(limit):
    for number in range(2, limit + 1, 2):
        yield number
print("Even numbers up to 10:")
for even in even_numbers(10):
    print(even)
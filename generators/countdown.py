def countdown(n):
    while n>=1:
        yield n
        n -= 1  
print("Countdown from 5:")
for i in countdown(5):
    print(i)    
    
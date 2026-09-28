def double_result(fun):
    def wraper(*args, **kwargs):
        result = fun(*args, **kwargs)
        return result * 2
    return wraper
@double_result
def add(num1, num2):
    return num1 + num2  
print("The double of the sum of 5 and 10 is:", add(5, 10))
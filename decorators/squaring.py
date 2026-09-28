def show_info(func):
    def wrapper(*args,**kwargs):
        print("before calling... ")
        result = func(*args,**kwargs)
        print("after calling... ") 
        return result
    return wrapper
@show_info
def square(num):
    return num*num
print("The square of 5 is:", square(5))
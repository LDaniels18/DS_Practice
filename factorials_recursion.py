def factorial(n):

    #now to create a base case to stop the function:
    if(n == 0 or n == 1):
        return 1
    else:
        #now take the factorial of the number by using a recursive call to itself
        return n * factorial(n-1)
    
print('Factorial Recussion Practice')

n = int(input())
print(type(n))

print(factorial(n))


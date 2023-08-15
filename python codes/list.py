# list is like array. but you can store different datatypes also

numbers = [1, 3, 25, 26, 98, 12]
print(numbers)

number = [element for element in range(11)]
print(number)

num = [element for element in range(11) if element%2 == 1]
print(num)

if 4 in num:
    print("yes")
else:
    print("no")


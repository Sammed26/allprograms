name = 'sammed'
name2 = 'shree'

print(name)
print(name2)
# you can also print character by character
print(name2[0])
print(name2[1])
print(name2[2])
print(name2[3])
print(name2[4])

# if you try to access invalid index it throws an error

# multiline strings
str = '''Hi
How are you?
I'm fine. How are you?
fine.
ja gharala ja lai shana hais.
chat fut tu pan'''

print(str)
# to iterate charcter by character in any string espicially in large or multiline strings
for char in str:
    print(char)
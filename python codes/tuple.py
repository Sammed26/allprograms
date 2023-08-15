# tuples are immutable, you can change it indirectly as,
# convert to list
# change list as you need
# change that list to tuple

tup1 = (1, 23, 25, 7, 26, 7, 65)
print(type(tup1))
print(len(tup1))

print(tup1.count(7))

print(tup1.index(26))
print(tup1.index(7, 4, 6))

# indirectly modifying tuple
list1 = list(tup1)
list1.append(34)
list1.extend([54, 98, 3])
tup1 = tuple(list1)
print(tup1)

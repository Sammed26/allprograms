list1 = [12, 26, 7, 89, 65, 9]
print(list1)
list1.append(2626)
print(list1)

list1.sort()
print(list1)

list1.reverse()
print(list1)

print(list1.index(7))

print(list1.count(26))

list2 = list1.copy()
print(list2)

list2.insert(4, 23423)
print(list2)

list2.extend(list1)
print(list2)

list3 = list1 + list2;
print(list3)


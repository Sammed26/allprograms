# in below function whichGreater a is required argument and b is default argument 
def whichGreater(a, b = 0):
    if(a>b):
        return a
    else:
        return b
    
print(whichGreater(3, 4))
print(whichGreater(-3))



# keyword argumets
# order doesn't matter if you pass with key value as arguments
def printfirstno(a, b):
    return a

print(printfirstno(23, 4))
print(printfirstno(b = 3, a = 4))




# keyword arbitary arguments
def printnumbers(*numbers):
    print("printing......")
    for number in numbers:
        print(number)

printnumbers(2,5,67,7,5,36,2,5,25,26)

# def printname(**name):
#     print(fname, lname)

# printname({fname="sammed", lname= "koshti"})
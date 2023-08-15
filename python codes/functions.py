def can_vote(age):
    if(age > 18):
        print("you can vote")
    else:
        print("you can't vote")



def mean(a, b):
    print((a+b)/2)


age = int(input("enter your age"))
a = int(input("enter first number"))
b = int(input("enter second number"))

can_vote(age)
mean(a, b)

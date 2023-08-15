age = int(input("enter your age"))

if(age <18):
    print("you can't vote, you are a kid")
elif((age >=18) & (age <= 60)):
    print("you can vote, you are young")
else:
    print("you can vote, you are seniour citizen")

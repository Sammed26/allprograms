# match statement in python is like switch in c or c++. But unlike c or c++ here one case matched only that part of code is going to execute not ahead code, but in c or c++ if break is not there then all cases form matched case are going to execute

val = int(input("enter your age"))

match val:
    case _ if(val < 18):           # you can insert if condition also or like swich you can use like swich also
        print("you can't drive")
    
    case _ if(val >= 18):
        print("you can drive")

    case _ :
        print("enter proper input")



a = int(input("enter any number from 1 to 5"))

match a:
    case 1:
        print("number is 1")
    case 2:
        print("number is 2")
    case 3:
        print("number is 3")
    case 4:
        print("number is 4")
    case 5:
        print("number is 5")
    case _:
        print("enter valid number")

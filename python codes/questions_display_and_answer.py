print("Kon Banega Corer pati\n\n")

questions = ["1. which is the \"capital of INDIA\"?", "2. \"ENDEAVOUR\" car belongs to which company?", "3. Biggest creature on earth?", "4. Biggest creature on land?", "5. What other business \"Rolls Royce\" do?"]

correct_answers = ["Delhi", "Ford", "Blue Whale", "Elephant", "Making Jet Engines"]
options = [["Delhi", "Mumbai", "Ichalkaranji", "Kolhapur"], ["Ford", "Audi", "Everest", "Volks Wagon"], ["Blue Whale", "Shark", "Hum Back Whale", "Seal"], ["Elephant", "Ant", "Rhino", "Genda"], ["Making Jet Engines", "Real Estate", "Making Rocket Engines", "Drugs"]]

prize = 0
count = 0
for question in questions:
    print(question)
    
    i = 0
    for option in options:
        print(i+1, option[i])
        i = i+1

    given_ans = int(input("enter your answer's option"))
    if given_ans == correct_answers[count]:
        print("CoRrEcT AnSwEr ==============")
        prize = 1000000 + prize*2
    else:
        print("Sorry Incorrect answer")
        prize = prize - prize/2






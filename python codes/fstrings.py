age = 20
name = "sammed"

# I want sentence like ' I'm sammed and my age is 20'
print(f"I'm {name} and my age is {age}")

print("this is how fstrings syntax looks like = f\"I'm {name} and my age is {age}\"")



# before 3.6 it was done as
sentence = "I'm {1} and my age is {0}"
print(sentence.format(age, name))

#Conditional Probabiltiy Exercise 2

a = {1,2,3}
b = {2,3,4}

#total events is 6

t = 6

pA = len(a)/t
pB = len(b)/t

AB = len(a & b)

pAB = AB/t #2,3

cp = pAB/pB
print(f'The he condidional probabiltiy for these two events is {cp}')

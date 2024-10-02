
**WHAT IS A DATA** **STRUCTURE?**

A data structure is a way of organizing data so that it can be use effectively

**RECURSIVE ALGORITHIMS**

A recursive algorithm is defined as an algorithm which can call itself with smaller  input values, and which obtains the result for the current input by applying simple operations to the returned value for the smaller  input

One can also consider a Recursive algorithm to be a loop but a loop which has an end when a condition has been met

_Examples of recursive functions include:_

1. Factorials  such as  n! = n*(n-1)* (n-2) ... 3* 2* 1  which multiplies the number N by that number with all the numbers below it when you subtract 1 till you reach 1 . (this kind of means its repeating the process of subtracting thus calling its self several times then multiplies all the results)

```python 
#input number
n = 9

#resulting fractorial variable
f = n

#loop to multiply all numbers between n and 1
for i in range(1,n):
	f = f*i
  

print(f'{n}! = {f}')
```

2. The Fibonacci sequence

This is a series of numbers where each number is the sum of the two preceding ones which is defined by

fib(n) = fib(n-1) + fib(n-2)

```python 
def fibbonacci(n):
	if n < 0:
		print("Incorrect Input")
	
	elif n == 0:
		return 0
	
	elif n == 1 or n == 2:
		return 1
	
	else:
		return fibbonacci(n-1) + fibbonacci(n-2)

#input number
n = 5

#loop to generate sequence
for i in range(1,n+1):
	print(f'{i} = {fibbonacci(i)}')
```

Fibonacci sequence is used in working out search algorithms in computing

**RECURSIVE DATA STRUCTURES**

A recursive data structure is a type of data structure that contains smaller instances of its self i.e. each part of the structure resembles the whole data structure

examples:

1. A linked list

In a linked list, each node in the linked list points to the next node, forming a chain. The recursive nature lies in the fact that each node contains a smaller linked list thus creating a kind of recursive behavior

2. Binary trees

A binary tree is similarly to a linked list in that it too has nodes which each have two outputs or children on the left and right side and this is continuously repeated till the desired outcome or number of iterations is achieved

#Program to check for palindrome
st=input("Enter any string -> ")
if(st==st[::-1]):
	print("The entered string is a palindrome.")
else:
	print("Not a palindrome.")


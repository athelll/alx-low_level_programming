#!/usr/bin/python3

# checks if number is a palindrome
def is_palindrome(val):
    return (str(val) == str(val)[::-1])

# returns largest palindrome
def palindrome():
    biggest_palindrome = 0
    for i in range(999, 100, -1):
        for j in range(999, 100, -1):
            mul = i * j
            if is_palindrome(mul) and mul > biggest_palindrome:
                biggest_palindrome = mul
    return biggest_palindrome

result = palindrome()
print(result)

/* 3.	Roman Numeral Converter: Write a program that takes an integer input (between 1 and 3999) and converts it to its Roman numeral representation. The program should output the Roman numeral as a string.
Note: You will need to use a series of conditional statements to break down the input number into components that correspond to Roman numeral symbols 
I = 1 , V = 5, X = 10 L = 50 , C = 100, D = 500, M = 1000 */

define int_to_roman(num):
    roman_numerals = {
        1: 'I',
        4: 'IV',
        5: 'V',
        9: 'IX',
        10: 'X',
        40: 'XL',
        50: 'L',
        90: 'XC',
        100: 'C',
        400: 'CD',
        500: 'D',
        900: 'CM',
        1000: 'M'
    }
    result = ''
    for value, numeral in sorted(roman_numerals.items(), reverse=True):
        while num >= value:
            result += numeral
            num -= value
    return result


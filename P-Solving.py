# REVERSE READABLE !!!
# my_list = input()
# my1_list = my_list.split()
# my2_list = map(int, my1_list)
# my3_list = list(my2_list)
# if len(my_list) != 1 and 0 :
#     print('False')
# else:
#     for i in range (len(my_list)//2):
#         if my_list[0] - my_list[-1] == 0:
#             continue
# print(my3_list)




# ELEPHANTS
# x = int(input())
# steps = 0
# while x > 0:
#     if x >= 5:
#         for i in range(x//5):
#             steps += 1
#             x = x - 5
#     elif x >= 4:
#         for i in range(x//4):
#             steps += 1
#             x = x - 4
#     elif x >= 3:
#         for i in range(x//3):
#             steps += 1
#             x = x - 3
#     elif x >= 2:
#         for i in range(x//2):
#             steps += 1
#             x = x - 2
#     elif x == 1:
#         steps += 1
#         x = x - 1
# if x == 0:
#     print(steps)


# UNIVERSE
# while True:
#     a = int(input())
#     if a != 42:
#         print(a)
#     else:
#         break


# PRIME GENERATOR
# def is_prime(n):
#     k = 0
#     for i in range(2, n // 2):
#         if n % i == 0:
#             k += 1
#             break
#     if n != 1 and n != 4 and k == 0:
#         print(n)
# for i in range(int(input())):
#     x, y = input().split(' ')
#     for j in range(int(x), int(y) + 1):
#         is_prime(j)


# DOMINO
# n1 = input().split(' ')
# n = list(map(int,n1))
# k = 0
# r = 0
# if n[0] == 1:
#     k = n[1] // 2
#     print(k)
#     exit()
# if n[1] == 1:
#     k = n[0] // 2
#     print(k)
#     exit()
# if n[0] % 2 == 0:
#     k += n[0]//2
# else:
#     k += n[0]//2
#     r += 1
# if n[1] % 2 == 0:
#     k = k * n[1]
# else:
#     k = k * n[1]
#     if r == 0:
#         print(k)
#         exit()
#     else:
#         r += n[1]-1
# if n[0] % 2 != 0 and n[1] % 2 == 0:
#     r = r*n[1]
# k += r//2
# print(k)
## 2nd way
# m, n = map(int, input().split())
# print(m,n)


## RECURSION COMBIN
# n = int(input())
# def recc(s:str, n):
#     if(len(s)==n):
#         print(s)
#         return;
#     recc(s+'1', n)
#     recc(s+'0', n)
# recc('', n)



# Words from Chars !!!
# def countCharacters(self, words: List[str], chars: str):
#     counter = 0
#     tcounter = 0
#     tchar = chars
#     for i in words:
#         for j in i:
#             if j in tchar:
#                 tcounter += j
#                 tchar.replace(j,'')
#         tchar = chars
#         if tcounter == len(i):
#             counter += tcounter
#             tcounter = 0
#         else:
#             tcounter = 0
#     return counter



#boy or girl
# name = list(input())
# setn = set(name)
# if len(setn) % 2 == 0:
#     print('CHAT WITH HER!')
# else:
#     print('IGNORE HIM!')


#RGB
# n = int(input())
# strin = list(input())
# counter = 0
#
# for i in range (n-1):
#     if strin[i] == strin[i+1]:
#         counter +=1
# print(counter)


#Bear and Big Bro
# a, b = input().split()
# a = int(a)
# b = int(b)
# years = 0
# while a <= b:
#     a *= 3
#     b *= 2
#     years += 1
# print(years)


# AB balance
# l = int(input())
# a = 'a'
# b = 'b'
# for c in range(l):
#     s = input()
#     ab = s.count('ab')
#     ba = s.count('ba')
#     if ab > ba:
#         s = s.replace('a', 'b', 1)
#     if ab < ba:
#         s = s.replace('b', 'a', 1)
#     print(s)


# Helpful maths
# s = list(input().replace('+',''))
# s0 = list(map(int,s))
# s1 = sorted(s0)
# str1 = list(map(str,s1))
# str2 =" "
# str2= str2.join(str1)
# print(str2.replace(' ','+'))

#PETYA AND STRINGS
# s11 = input()
# s22 = input()
# s1 = s11.lower()
# s2 = s22.lower()
# if s1 == s2:
#     print('0')
# elif s1 > s2:
#     print('1')
# else:
#     print('-1')
#


# Beautiful matrix - pain
# matrix = [list(map(int, input().strip().split(" "))) for i in range (5)]
# ii = 0
# ji = 0
# for i in range(5):
#     for j in range (5):
#         if matrix[i][j] == 1:
#             ii, ji = i, j
# o1 = abs(2 - ii)
# o2 = abs(2 - ji)
# print(o1+o2)


# Theatre square
# import math
# n, m, a = map(int, input().split(' '))
# counter = 0
# if m ==1 and n ==1:
#     print(1)
#     exit()
# counter += math.ceil(n/a)
# counter += math.ceil(m/a)
# print(counter)





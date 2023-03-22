
# link: https://www.hackerrank.com/challenges/string-validators/problem?isFullScreen=true

if __name__ == '__main__':
    s = input()
#     for i in range(len(s)):
#       if s[i].isalnum():
#         print("True")
#       else: 
#         print("False")
#       if s[i].isalpha():
#         print("True")
#       else: 
#         print("False")
#       if s[i].isdigit():
#         print("True")
#       else: 
#         print("False")
#       if s[i].islower():
#         print("True")
#       else: 
#         print("False")
#       if s[i].isupper():
#         print("True")
#       else: 
#         print("False") 

# above code passes only 3 test cases 

    print (any(i.isalnum() for i in s)) # any function - if any iterable is true, it returns true else false
    # print (any(i.isalnum() for i in s))
    print (any(i.isalpha() for i in s))
    print (any(i.isdigit() for i in s))
    print (any(i.islower() for i in s))
    print (any(i.isupper() for i in s))
  
      

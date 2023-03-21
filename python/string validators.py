
# only 3 test cases passed
# yet to solve
if __name__ == '__main__':
    s = input()
    for i in range(len(s)):
      if s[i].isalnum():
        print("True")
      else: 
        print("False")
      if s[i].isalpha():
        print("True")
      else: 
        print("False")
      if s[i].isdigit():
        print("True")
      else: 
        print("False")
      if s[i].islower():
        print("True")
      else: 
        print("False")
      if s[i].isupper():
        print("True")
      else: 
        print("False") 
  
      

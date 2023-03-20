https://www.hackerrank.com/challenges/find-a-string/problem?isFullScreen=true 

def count_substring(string, sub_string):
  count = 0
  str_len = len(string)
  sub_len = len(sub_string)
  for i in range(str_len - sub_len + 1 ):
    if(string[i:i+sub_len] == sub_string) : # using string slicing
      
    # for j in range(len(sub_string)):
    #   if sub_string[j] ==string[i]:
    #     i +=1
    #     j +=1 
    #   else:
    #     i+=1
      count +=1   
  return count


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)

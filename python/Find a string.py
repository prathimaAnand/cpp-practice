https://www.hackerrank.com/challenges/find-a-string/problem?isFullScreen=true 

  def count_substring(string, sub_string):
  count = 0
  for i in range(0, len(string)):
    for j in range(0, len(sub_string)):
      if string[i] == sub_string[j]:
        i +=1
        j +=1
      else:
        i+=1
        
    count +=1   
    return count

if __name__ == '__main__':

def find_missing_letters(s): 

    s = s.lower() 

    alphabet_set = set("abcdefghijklmnopqrstuvwxyz") 

    for char in s: 

        if char in alphabet_set: 

            alphabet_set.remove(char) 

    if not alphabet_set: 

        return "0" 

    missing_letters = ''.join(sorted(list(alphabet_set))) 

    return missing_letters 

  

input_str = input() 

result = find_missing_letters(input_str) 

print(result) 

def count_common_characters(str1, str2):
    # dictionary to store frequencies of characters in str1
    char_freq={}
    
    #traversing str1
    for ch in str1:
        if ch not in char_freq:
            #add a new character to char_freq
            char_freq[ch]=0
            
        char_freq[ch]+=1 
    
    # variable to store count of common characters
    comm_count=0
    
    # traversing str2
    for ch in str2:
        # check if the character is present in char_freq
        if ch in char_freq:
            # found a common character, hence increment count
            comm_count+=1
            # decrement frequency of this character, if frequency becomes 0, remove this character from char_freq
            char_freq[ch]-=1
            if char_freq[ch]==0:
                char_freq.pop(ch)
                
    return comm_count 
    
string1="helloworld"
string2="home"
print(count_common_characters(string1,string2))

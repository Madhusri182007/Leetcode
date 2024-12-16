char* longestCommonPrefix(char** strs, int strsSize) {
    char* prefix = strs[0]; 
    int lengthcurrent = strlen(prefix); 
    for (int i = 1; i < strsSize; i++)
     {
        char* string = strs[i];
        for (int j = 0; j < lengthcurrent; j++) 
        {
            if (string[j] != prefix[j]) 
            {
                prefix[j] = '\0'; 
                lengthcurrent = j;
            }
        }
    }
    return prefix;
} 

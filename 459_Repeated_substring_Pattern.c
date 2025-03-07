bool repeatedSubstringPattern(char* s) {
    int n = strlen(s);
    char res[ 2*n+1 ];
    strcpy(res, s); 
    strcat(res, s); 
    res[ 2*n - 1] = '\0'; 

    return strstr(res +1, s); 
}

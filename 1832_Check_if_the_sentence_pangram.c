bool checkIfPangram(char * sentence){
    int* check = calloc(sizeof(int), 26);
    int len = strlen(sentence);
    if(len < 26)
    {
        return false;
    }

    for(int i = 0; i < strlen(sentence); i++){
        check[sentence[i] - 'a'] = check[sentence[i] - 'a'] + 1;
    }
    for(int i = 0; i < 26; i++)
    {
        if(check[i] == 0)
            return false;
    }
    return true;
}

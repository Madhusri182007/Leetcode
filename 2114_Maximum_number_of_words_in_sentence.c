int mostWordsFound(char ** sentences, int sentencesSize){
    int word = 0;

    for (int i = 0; i < sentencesSize; i++) {
        int c = 0;
        for (int count = 0; sentences[i][count] != '\0'; count++) {
            if (sentences[i][count] == ' ') {
                c++;
            }
        }
        if (c > word) {
            word= c;
        }
    }

    return word+ 1;
}

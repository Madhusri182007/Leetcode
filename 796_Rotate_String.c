bool rotateString(char* s, char* goal) {
  int l1=strlen(s);
  int l2=strlen(goal);
  if(l1!=l2)
  {
    return false;
  }
   char str[2*l1+1];
   strcpy(str,s);
   strcat(str,s);
   return strstr(str,goal) !=NULL;
}

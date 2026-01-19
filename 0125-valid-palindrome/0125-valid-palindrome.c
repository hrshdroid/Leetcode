bool isPalindrome(char* s) {
    int i=0,j=0;

    while (s[i] != '\0'){
        if (s[i]>='a' && s[i]<='z' ){
            s[j]=s[i];
            j++;
        }
        else if ( s[i]>='A' && s[i]<='Z'){
            s[j]=s[i]+('a'-'A');
            j++;
        }
        else if (s[i] >= '0' && s[i] <= '9') {   
            s[j++] = s[i];
        }
        i++;
    }
    s[j]='\0';
    bool ans=true;

    for (int k=0,l=j-1;k<l;k++,l--){
        if (s[k] != s[l]){
            ans=false;
        }
    }
    return ans;


}
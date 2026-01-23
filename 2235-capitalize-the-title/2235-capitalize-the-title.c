char* capitalizeTitle(char* title) {
    int count=0;
    for (int i=0;title[i];i++){
        if (title[i]>='A' && title[i]<='Z'){
            title[i]+=32;
        }
        
    }
    

    for (int i=0;title[i];i++){
        if (title[i] != ' ')
            count++;
        else {
            if (count >= 3)
                title[i - count] -= 32;
            count = 0;
        }
    }

    if (count >= 3)
        title[strlen(title) - count] -= 32;    
    return title;

}
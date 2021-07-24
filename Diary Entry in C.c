#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *pointer;
    char diary-entry[50];

    //Already created the necessary file for this

    pointer = fopen("diary.txt", "w");

    if(pointer == NULL)
    {
        printf("Error while opening the file\n");
        exit(1);
    }

    printf("Make an entry in your Diary:\n");

    do{
        scanf("%s", &diary_entry);
    
        fprintf(pointer, "%s ", diary_entry);
    
    }while(strlen(diary_entry) > 1);

    fclose(pointer);

    return 0;
}
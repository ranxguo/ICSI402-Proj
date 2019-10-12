#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

void create(char file[10], char code[2] ){
    if(strcmp(code, "-f") == 0){
        umask(0000); //set umask 0000
        if(creat(file, 0640) < 0){
            printf("Failed to create\n");
        }
        else{
            printf("successfully to create!\n");
        }
    }

    if(strcmp(code, "-d") == 0){

        if(NULL==opendir(file)){
            mkdir(file,0775);
        }
        else{
            printf("Failed to create!\n");
        }
    }

}

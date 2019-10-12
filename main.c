#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void create(char file[10], char code[2]);

int main(int argc, char* argv[]){
    int command;
    char filename[10];
    
    if(argc == 1){
		loop:
        
        printf("Please enter command1111! \n");
        printf("Input 1 to create filepath \n");
        printf("Input 2 to create dirpath \n");
        printf("Input 3 to create filepath \n");
        printf("Input 4 to create hard link \n");
        printf("Input 5 to create soft link \n");
        printf("Input 6 to quit \n");
        scanf("%d",&command);
        if(command!=1 && command!=2 && command!=3 &&
            command!=4 && command!=5 && command!=6){
            goto loop;
        }
        if(command == 1){
            printf("Input file name: \n");
            scanf("%s",&filename);
            create(filename, "-f" );
        }
        if(command == 2){
            printf("Input path: \n");
            scanf("%s",&filename);
            create(filename, "-d" );
        }
        if(command == 3){
            printf("We need code here!!!!\n");
        }
        if(command == 4){
            printf("We need code here!!!!\n");
        }
        if(command == 5){
            printf("We need code here!!!!\n");
        }
        if(command == 6){
            printf("We need code here!!!!\n");
        }

        

	}
    if(argc == 2){
        if(strcmp(argv[1], "quit") == 0){
            printf("We need code here!!!!\n");
        }
        else{
            printf("Wrong commamd2222!\n");
            
        }
        
    }

	if(argc == 3){
		if(strcmp(argv[1], "create") == 0 ){
			if(strcmp(argv[2], "-f") == 0 ){
                printf("Input file name: \n");
                scanf("%s",&filename);
                create(filename, "-f" );
                
			 	}
            else if(strcmp(argv[2], "-d") == 0){
                printf("Input path: \n");
                scanf("%s",&filename);
                create(filename, "-d" );
                
            }
            else if(strcmp(argv[2], "-h") == 0){
                printf("We need code here!!!!\n");
                
            }
            else if(strcmp(argv[2], "-s") == 0){
                printf("We need code here!!!!\n");
                
            }
            else{
                printf("Wrong commamd!3333\n");
                
            }
		}
        else{
            printf("Wrong commamd!4444\n");
            
        }
	}
    if(argc > 3){
        printf("Wrong commamd!5555\n");
        
    }
}

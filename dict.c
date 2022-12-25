#include "directory-operations.h"
#include "file-operations.h"
#include <string.h>

#define DATA_BASE "/mydict/data_base"
#define MODE "r"

int main( int argc , char** argv ) {

    if (argc == 2) {
        
        char* target = to_upper_string(argv[1]);
        
        //get the current home directory
        char* homedir = get_homedir();
        
        

        


        strcat( homedir , DATA_BASE );



        FILE *f = prepare_file( homedir , MODE );

        

        if ( search_word(target,f) ){
        
        printf("%s", target);
        
        char *getcwd(char *buf, size_t size);


        print_results(f,target);


        fclose(f);

        }
        else {

            printf("No definitions found for : %s", target);
        }

    }
    else {
        printf("mydict [word]\n");
    }

    
    return 0;

}

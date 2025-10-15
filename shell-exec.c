#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[]){
     if(argc<2)
     {
          printf("incorrect argument\n");
          return 1;
     }

     pid_t pid = fork();
     if(pid<0)
     {
          perror("fork failed");
          return 1;
     }
     if(pid==0)
     {
          printf("child process...\n");
          execvp(argv[1], argv+1);
          perror("execv failed");
          return 1;
     }
     else{
          printf("parent process..\n");
          wait(NULL);
          printf("child finished\n");
     }
     return 0;
}
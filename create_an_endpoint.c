  #include <stdio.h>
  #include <sys/socket.h>
  #include <sys/types.h>
  #include <stdlib.h>
 
 
  int main(int argc,char *argv[])
  {
 
 
          int fd = socket(AF_INET,SOCK_STREAM,0);
          //created a communication endpoint.
 
          if(fd == -1)
          {
                  printf("Error creating socket.");
                  exit(1);
          }
 
          printf("Socket Created:_%d_\n",fd);
 
 
 
 
 
 
 
 
 
 
          return (0);
  }

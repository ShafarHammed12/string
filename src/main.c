#include <stdio.h>

int main(int argc, char** argv){
   char firstname[] = {'J', 'o', 'h', 'n','\0'};
   char lastname[] = {'D', 'o', 'e', '\0'};
   char fullname[5] = "john Doe";
   printf("Firstname is : %s\n", firstname );
   printf("Lastname is : %s\n", lastname );
   printf("Fullname is :%s", fullname);
   return 0;

}
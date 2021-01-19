#include<stdio.h>
// creating a function
void encrypt(char *c){
    char *ptr= c;
    while(*ptr!= '\0'){ //until and unless you reach the end of the string
        *ptr = *ptr+1;
         ptr++;

    }

}
int main(){
    char c[] = "This is an encrypted code"; 
    //initializing array c[] but not *c because *c would only be ROM - so in oder to change
    encrypt(c);
    printf("Encrypted string is %s",c);


    return 0;
}
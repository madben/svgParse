#include <stdio.h>

int main() {
     // file pointer for svg
     FILE *svgFile;
     svgFile = fopen("test.svg", "r");
     int chr;
     while ((chr=fgetc(svgFile)) != EOF) {
         printf("%c", chr);

       

           
     } 
     fclose(svgFile); 
     getchar();
     return 0;

}

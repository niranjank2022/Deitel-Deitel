/* Q. No. 4.25 
!!!*/
 #include <stdio.h>

 int main() {
   int bin, oct, hex, deci;

   printf("|DECI|BIN|OCT|HEX|");
   for (deci = 0; deci <= 20; deci++)
   {  
      printf("\n|%-4d|", deci);

      /* Finding binary equivalent */
      bin = deci;

      printf("%d", bin/16);
      bin %= 16;

      printf("%d", bin/8);
      bin %= 8;

      printf("%d", bin/4);
      bin %= 4;

      printf("%d", bin/2);
      bin %= 2;

      printf("%d|");

      /* Finding octal equivalent */
      oct = deci;

      printf(" %d", oct/8);
      oct %= 8;

      printf("%d|", oct);

      /* Finding hexadecimal equivalent */
      hex = deci;

      printf("%d", hex/16);
      hex %= 16;

      printf("%d", hex);
      
      if (hex/16 > 0) {
         switch (hex) {
         case 10:
            hex = 'A';
            break;
         case 11:
            hex = 'B';
            break;
         case 12:
            hex = 'C';
            break;
         case 13:
            hex = 'D';
            break;
         case 14:
            hex = 'E';
            break;
         case 15:
            hex = 'F';
            break;
         
         default:
            hex = ' ';
      }
      printf("%c|", hex);
      }
      
   }
   

 }
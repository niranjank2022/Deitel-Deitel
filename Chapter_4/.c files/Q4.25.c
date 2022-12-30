/* Q. No. 4.25 
!!!*/
 #include <stdio.h>

 int main() {
   int bin, oct, hex, deci;
   char ch;

   printf("|DECI|BIN  |OCT|HEX|");
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

      if (hex % 16 >= 10) {
         switch (hex) {
         case 10:
            ch = 'A';
            hex %= 10;
            break;
         case 11:
            ch = 'B';
            hex %= 11;
            break;
         case 12:
            ch = 'C';
            hex %= 12;
            break;
         case 13:
            ch = 'D';
            hex %= 13;
            break;
         case 14:
            ch = 'E';
            hex %= 14;
            break;
         case 15:
            ch = 'F';
            hex %= 15;
            break;
         default:
            ch = ' ';
      }
      printf("%2c", ch);
      }

      printf("%d|", hex);
   }
   

 }
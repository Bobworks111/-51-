#include <stdio.h>  //touwenjian
#include <math.h>  
int main()
{
   int a =1234, b=3, c , d , e , f , g = 4 , h =8 , i = 9 ;  //声明整形abcdef

   c = (a / 1000) % 10;               //%表示除以后面那个数后取余数，%10可以理解为取前面运算结果后的个位数；
   d = (a / 100) % 10;
   e = (a / 10) % 10;
   f = (a / 1) % 10;
   g = sqrt (f) ; //sqrt表示开方
   i = h&i;              //&表示二进制的与，两数对应位的二进制都为1时该位为1，否则为0

   printf (" a = %d\r\n", c );
   printf (" b = %d\r\n", d );
   printf (" c = %d\r\n", e );
   printf (" d = %d\r\n", f );
   printf (" g = %d\r\n", g );
   printf (" i = %d\r\n", i );

   if(a<=b)         //判断语句

   {
       printf ("zhen\n");
   }

   
   else 
   {
       printf ("jia 1 \n");
   }

   if(d>=b)         //判断语句

   {
       printf ("zhen\n");
   }
   else if(a<=b)            //判断else if，若真则printf 。若假则输出else。
                            // else if 后面还可以接else if
   {
       printf ("di er pan duan\n");
   }

   
   else 
   {
       printf ("jia 2\n");
   }
   switch (a)
   {
       case 1    :printf("A\r\n");break;      //有break时符合条件输出不再判断，反之继续判断
       case 123  :printf("B\r\n");break;
       case 12   :printf("C\r\n");break;
       case 1233 :printf("D\r\n");break;
       default   :printf("E\r\n");break;    //当所有的case都不符合时执行default
   }
   

   return 0;
}
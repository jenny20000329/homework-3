#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float h,w,m,BMI; 
    printf("======�ӨϥΪ̪�BMI��T======\n"); 
    printf("�z���������G");
    scanf("%f",&h);
    printf("�z���魫���G");
    scanf("%f",&w);
    printf("=============================\n");
    m=h/100;
    BMI=w/(m*m);
    printf("BMI = %.2f\n\n",BMI);
 	system("pause");
 	return 0;
}

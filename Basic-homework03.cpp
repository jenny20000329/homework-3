#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float h,w,m,BMI; 
    printf("======該使用者的BMI資訊======\n"); 
    printf("您的身高為：");
    scanf("%f",&h);
    printf("您的體重為：");
    scanf("%f",&w);
    printf("=============================\n");
    m=h/100;
    BMI=w/(m*m);
    printf("BMI = %.2f\n\n",BMI);
 	system("pause");
 	return 0;
}

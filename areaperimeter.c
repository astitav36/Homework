#include<stdio.h>



int main(){



//rectangle

float c;//c-radius of circle

float s;//side of square

float j,b;

//rectangle


printf("enter the length");

scanf("%f",&j);

printf("enter the breadth");

scanf("%f",&b);

printf("area:%.2f\n",j*b);

printf("perimeter:%.2f\n",2*(j+b));



//square


printf("enter the side");

scanf("%f",&s);

printf("area:%.2f\n",s*s); printf("perimeter:%.2f\n",4*s);



//circle


printf("enter the radius");

scanf("%f",&c);

printf("area:%.2f\n",3.14*c*c); printf("circumference:%.2f\n",2*3.14*c);


return 0;
}
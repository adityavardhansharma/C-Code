#include<stdio.h>
#include<math.h>
void type(float a, float b, float c);
void area(float a, float b, float c);
void main()
{
    float a,b,c;
    printf("Enter the sides of triangles");
    scanf("%f%f%f",&a,&b,&c);
    if(a<b+c && b<c+a && c<a+b)
    {
        type(a,b,c);
        area(a,b,c);
    }
    else
    {
        printf("No triangle possible with these sides\n");
    }
}

void type(float a, float b, float c)
{
    if ((a*a)+(b*b)==(c*c) || (b*b)+(c*c)==(a*a) || (a*a)+(c*c)==(b*b))
    {
        printf("Right angled triangle\n");
    }
    if(a==b && b==c)
    {
        printf("Equilateral triangle\n");
        
    }
    else if (a==b || b==c || c==a)
    {
        printf("isosceles triangle\n");
    
    }
    else
    {
        printf("scalene triangle\n");
    }
}
void area( float a, float b, float c)
{
    float area,s;
    s= (a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle= %.1f\n",area);
}



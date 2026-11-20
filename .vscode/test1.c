#include<stdio.h>
int main ()
{
    char name_letter;
    int Pincode;
    float height;
    double latitude,longitude;

    printf("Enter first latter of your name:");
    scanf(" %c", &name_letter);

    printf("Enter your Pincode:");
    scanf(" %d", &Pincode);

    printf("Enter your height in feet:");
    scanf(" %f" ,&height);

    printf("Enter your latitude and longitude of your address :");
    scanf("%lf %lf" ,&latitude,&longitude);

    printf("\tHere is what you have entered\t\n");
    
    printf("First letter in name: %c\n",name_letter);
    printf("Pincode:%d\n",Pincode);
    printf("Height:%f\n",height);
    printf("location:%lf %lf\n",latitude,longitude );

    return 0;
}
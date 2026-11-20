// #include<stdio.h>

// float celsius_to_fahrenheit(float num1);

// int main(){
//     float celsius;

//     printf("enter the celsius:");
//     scanf("%f",&celsius);

//    float store= celsius_to_fahrenheit(celsius);
//    printf("%.2f",store);

// }
//     float celsius_to_fahrenheit( float num1)
//     {
//         float fehrenheit=(float)9/5*num1+32;
//         return fehrenheit;
//     }


#include<stdio.h>

float fehrenheit_to_celsius(float num1);

int main(){
    int fehrenheit;
    float celsius;
    
    scanf("%d",&fehrenheit);

   float stor = fehrenheit_to_celsius(fehrenheit);
   printf("%.2f",stor);


}

    float fehrenheit_to_celsius(float num1)
    {
        float celsius=(float)(num1-32)*5.0/9.0;
            return celsius;
    }
#include<stdio.h>
int main(){
float celsius, fahrenheit,kelvin; 
scanf("%f",&celsius);{
fahrenheit =(celsius * 9.0 / 5.0) + 32.0;
        kelvin = celsius + 273.15;
        printf("%.2f %.2f\n", fahrenheit, kelvin);
    }
    
    return 0;
    }

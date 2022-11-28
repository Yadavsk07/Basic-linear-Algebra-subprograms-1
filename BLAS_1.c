#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Function defination of different functions in BLAS_1.
float DAXPY();
float DCOPY();
float DDOT();
float DNRM2();
float DSCAL();
float DSWAP();
float DASUM();
float IDAMAX();

void main()
{
   //Calling all the functions to perform their respective tasks.
   printf("DAXPY - Y = a*X + Y\n");
   DAXPY();
   printf("DCOPY - Copy x into y \n");
   DCOPY();
   printf("DDOT - Dot product\n");
   DDOT();
   printf("DNRM2 - Euclidean norm\n");
   DNRM2();
   printf("DSCAL - x = a * x\n");
   DSCAL();
   printf("DSWAP - swap x and y\n");
   DSWAP();
   printf("DASUM - Sum of absolute values\n");
   DASUM();
   printf("IDAMAX - Index of max abs value\n");
   IDAMAX();
}
//Function to perform specific calculation.
float DAXPY()
{
    //Arrays to store the components of vectors.  
    float x[3];
    float y[3];
    float v;
    float a;
    //Reaing the components of vector x. 
    printf("Enter the components of vector X[]\n");
    for(int i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        x[i] = v;
    }
    //Reaing the components of vector y. 
    printf("Enter the components of vector Y[]\n");
    for(int i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        y[i] = v;
    }
    //Reading any scalar value.    
    printf("Enter a scalar - 'a'\n");
    
    scanf("%f",&a);
    //printing the vector x.
    printf("X = ( ");
    for(int i = 0;i < 3;i++)
    {        
         printf("%f ",x[i]);
    }
    printf(")\n");
    //printing the vector y.
    printf("Y = ( ");
    for(int i = 0;i < 3;i++)
    {        
         printf("%f ",y[i]);
    }
    printf(")\n");
    //Performing certain specific calculation.
    for(int i = 0;i < 3;i++)
    {        
        y[i] = a*x[i] + y[i];
    }
    printf("Y = a*X + Y\n");
    //printing the vector y after above calculations.
    printf("Y = ( ");
    for(int i = 0;i < 3;i++)
    {        
        printf("%f ",y[i]);
    }
    printf(")\n");
    
}

//Function to copy the components of a vector into another vector.
float DCOPY()
{
    int i;
    float v;
    
    //Arrays to store the components of vectors.  
    float x[3];
    float y[3];
    //Reaing the components of vector x. 
    printf("Enter the components of vector X[]\n");
    for(i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        x[i] = v;
    }
    //copying the components of x into y.
    for(i = 0;i < 3;i++)
    {
       y[i] = x[i];
    }
    //printing the vector x.
    printf("X = ( ");
    for(i = 0;i < 3;i++)
    {
        printf("%f ", x[i]);
    }
    printf(")\n");
    //printing the vector y.
    printf("After copying vector X into Y\n");
    printf("Y = ( ");
    for(i = 0;i < 3;i++)
    {
        printf("%f ", y[i]);
    }
    printf(")\n");

}

//Function to calculate the dot product of two vectors.
float DDOT()
{
    float v;
    //Arrays to store the components of vectors.  
    float x[3];
    float y[3];
    float p[3];
    float sum = 0;
    //Reaing the components of vector x. 
    printf("Enter the components of vector X[]\n");
    for(int i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        x[i] = v;
    }
    //Reaing the components of vector y.
    printf("Enter the components of vector y[]\n");
    for(int i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        y[i] = v;
    }
    //Calculating the dot product of two vectors x and y.
    for(int i = 0;i < 3;i++)
    {        
        p[i] = x[i] * y[i];
        sum += p[i];
    }
    //printing the vector x.
    printf("X = ( ");
    for(int i = 0;i < 3;i++)
    {
        printf("%f ", x[i]);
    }
    printf(")\n");
    //printing the vector y.
    printf("Y = ( ");
    for(int i = 0;i < 3;i++)
    {
        printf("%f ", y[i]);
    }
    printf(")\n");
    printf("The dot product of two vectors is :%f\n" , sum);
    
}

//Function to calculate the euclidean norm of vector.
float DNRM2()
{
    int i;
    float v , sum , sqr;

    float x[3]; //Array to store components of  a vector
    //Reaing the components of vector x.
    printf("Enter the components of vector X[]\n");
    for(i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        x[i] = v;
    }
    //printing the vector x.
    printf("X = ( ");
    for(i = 0;i < 3;i++)
    {
        printf("%f ", x[i]);
    }
    printf(")\n");
    //loop to calculate the sum of squares of components of vector x.
    for(i = 0;i < 3;i++)
    {        
        sum += x[i] * x[i];
    }

    sqr = sqrt(sum); //Euclidean norm of x.
    printf("Euclidean Norm of vector X : ");
    printf("%f\n" , sqr);
}

//Function for Scalar multiplication to vectors.
float DSCAL()
{
   
    float v1[3]; //Array to store a vector.
    float v2[3]; //Array to store the resultant vector.
    float value;
    float a;
    //Reading the components of vector.
   printf("Enter the components of vector\n");
    for(int i=0;i<3;i++)
    {
       scanf("%f",&value);
       v1[i] = value;
    }
    //Reading any scalar value.
    printf("Enter any scalar - 'a'\n");
    scanf("%f",&a);
    //Multiplying scalar quantity to vector.
    for(int i=0;i<3;i++)
    {
       v2[i] = a * v1[i];
    }
    //Printing the vectors v1 and v2.
    printf("V1 =( ");
    for(int i=0;i<3;i++)
    {
       printf("%f ",v1[i]);
    }
    printf(")\n");

    printf("V2 = a * V1\n");
    
    printf("V2 =( ");
    for(int i=0;i<3;i++)
    {
       printf("%f ",v2[i]);
    }
    printf(")\n");

}

//Function for swapping of two vecors x and y.
float DSWAP()
{
    
    float v; 
    //Arrays to store the components of vector.
    float x[3];
    float y[3];
    float t[3];
    //Reading the components of vector X.
    printf("Enter the components of vector X[]\n");
    for(int i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        x[i] = v;
    }
    //Reading the components of vector Y.
    printf("Enter the components of vector y[]\n");
    for(int i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        y[i] = v;
    }
    //Printing the vector x.
    printf("X = ( ");
    for(int i = 0;i < 3;i++)
    {
        printf("%f ", x[i]);
    }
    printf(")\n");
    //Printing the vector y.
    printf("Y = ( ");
    for(int i = 0;i < 3;i++)
    {
        printf("%f ", y[i]);
    }
    printf(")\n");
    //Swaping the components of vector x and y.
    for(int i = 0;i < 3;i++)
    {
        t[i] = x[i];
        x[i] = y[i];
        y[i] = t[i];
    }
    //printing the vectors after swapping.

    printf("The vectors after swaping\n");

    printf("X = ( ");
    for(int i = 0;i < 3;i++)
    {
        printf("%f ", x[i]);
    }
    printf(")\n");

    printf("Y = ( ");
    for(int i = 0;i < 3;i++)
    {
        printf("%f ", y[i]);
    }
    printf(")\n");
}
//Function to calculate the sum of absolute values 
float DASUM()
{
    int i;
    float v;
    float sum;
    //Arrays to store the components of vectors.  
    float x[3];
    float y[3];
    //Reaing the components of vector x. 
    printf("Enter the components of vector X[]\n");
    for(i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        x[i] = v;
    }

    //Calculating the sum of absolute values.
    for(i = 0;i < 3;i++)
    {        
       y[i] = abs(x[i]);
       sum += y[i];
    }
    //printing the vector x.
    printf("X = ( ");
    for(i = 0;i < 3;i++)
    {
        printf("%f ", x[i]);
    }
    printf(")\n");
    printf("The sum of absolute values of the components of the vector X is : %f\n" , sum);

}
//Function to calculate the index of maximum absolute value .
float IDAMAX()
{
    int i , index;
    float v;
    float sum , max;
    //Arrays to store the components of vectors.  
    float x[3];
    float y[3];
    //Reaing the components of vector x. 
    printf("Enter the components of vector X[]\n");
    for(i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        x[i] = v;
    }

    //Calculating the absolute values .
    for(i = 0;i < 3;i++)
    {        
       y[i] = abs(x[i]);
       
    }
    max = y[0];
    //Calculating the index of maximum absolute value.
    for(i = 0;i < 3;i++)
    {        
       if (y[i] > max)
       {
           max = y[i];
           index = i;
       }
    }
    //printing the vector x.
    printf("X = ( ");
    for(i = 0;i < 3;i++)
    {
        printf("%f ", x[i]);
    }
    printf(")\n");
    printf("The index of maximum absolute value is : %d" , index+1);

}

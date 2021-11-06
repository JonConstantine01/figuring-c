//program to find limits of data types
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(void)
{
    /*We use %u as defferentiate an unsigned integer which is a non negative whole numbers*/
    printf("sizeof(char) = %u\n", sizeof(char));
    printf("sizeof(short) = %u\n", sizeof(short));
    printf("sizeof(int) =%u\n", sizeof(int));
    printf("sizeof(long) = %u\n",sizeof(long));
    printf("sizeof(float) =%u\n",sizeof(float));
    printf("sizeof(double) =%u\n", sizeof(double));
    printf("sizeof(long double) = %u\n",sizeof(long double));

    /*%d gives signed value, which means it gives -ve numbers as well*/
    /**schar min and max refers to signed charater min and max values*/
    /**schar min and max refers to unsigned charater min and max values*/
    printf("SCHAR_MIN=%d\n", SCHAR_MIN);
    printf("SCHAR_MAX=%d\n", SCHAR_MAX);
    printf("UCHAR_MAX=%d\n", UCHAR_MAX);
    printf("UCHAR_MAX=%d\n", UCHAR_MAX);

    /*Short Int Min signed limits*/
    printf("SHRT_MIN=%d\n", SHRT_MIN);
    printf("SHRT_MAX=%d\n", SHRT_MAX);
    printf("USHRT_MAX=%d\n", USHRT_MAX);

    /**/
    printf("INT_MIN=%d\n", INT_MIN);
    printf("INT_MAX=%d\n", INT_MAX);





}
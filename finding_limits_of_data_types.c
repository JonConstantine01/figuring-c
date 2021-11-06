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

    /*Dealing with signed int min and max values*/
    printf("INT_MIN=%d\n", INT_MIN);
    printf("INT_MAX=%d\n", INT_MAX);
    printf("UINT_MAX=%d\n", UINT_MAX);

    /*Dealing with Long min and max ld -> l means long decimal and lu -> long unsigned int*/
    printf("LONG_MIN=%ld\n", LONG_MIN);
    printf("LONG_MAX=%ld\n", LONG_MAX);
    printf("ULONG_MAX=%lu\n", ULONG_MAX);

    /*smalles postive normalized value, %e -> to Prints a floating-point number in scientific notation (e.g., 1.175494e-38).*/
    printf("FLT_MIN=%e\n", FLT_MIN);
    printf("FLT_MAX=%e\n", FLT_MAX);

   /*Same as FLT_MIN, but for double*/
    printf("DBL_MIN=%e\n", DBL_MIN);
    printf("DBL_MAX=%e\n", DBL_MAX);

    /*Smallest positive normalized long double value. long double can have more precision than double depending on the compiler/platform.*/
    printf("LDBL_MIN=%e\n", LDBL_MIN);
    printf("LDBL_MAX=%e\n", LDBL_MAX);

    /*Number of decimal digits of precision for float, double, long double*/
    printf("FLT_DIG=%d\n", FLT_DIG);
    printf("DBL_DIG=%d\n", DBL_DIG);
    printf("LDBL_DIG=%d\n", LDBL_DIG);

}
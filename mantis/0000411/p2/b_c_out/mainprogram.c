#include <stdio.h>
#include <memory.h>
#include <math.h>
#include <float.h>
#include <limits.h>
#include "asn1crt.h"

#include "b_auto_tcs.h"

int main(int argc, char* argv[])
{
	(void)argc;
	(void)argv;

	int totalErrors = 0;
	flag result;
	int errCode;

	{
	    {
	        // dummy statement used for calling init functions
	RGBCOLORS tmp0;
	        RGBCOLORS_Initialize(&tmp0);
	    }
	RGBCOLORS tmp = 
	        RGBCOLORS_red;
			
		result = RGBCOLORS_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case rgbcolors_1 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'rgbcolors_1' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'rgbcolors_1' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'rgbcolors_1' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'rgbcolors_1'\n");
			}
			printf("Test Value was rgbcolors_1 RGBCOLORS ::= red\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	RGBCOLORS tmp0;
	        RGBCOLORS_Initialize(&tmp0);
	    }
	RGBCOLORS tmp = 
	        RGBCOLORS_green;
			
		result = RGBCOLORS_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case rgbcolors_2 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'rgbcolors_2' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'rgbcolors_2' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'rgbcolors_2' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'rgbcolors_2'\n");
			}
			printf("Test Value was rgbcolors_2 RGBCOLORS ::= green\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	RGBCOLORS tmp0;
	        RGBCOLORS_Initialize(&tmp0);
	    }
	RGBCOLORS tmp = 
	        RGBCOLORS_blue;
			
		result = RGBCOLORS_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case rgbcolors_3 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'rgbcolors_3' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'rgbcolors_3' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'rgbcolors_3' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'rgbcolors_3'\n");
			}
			printf("Test Value was rgbcolors_3 RGBCOLORS ::= blue\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	static CH1 tmp0;
	        CH1_Initialize(&tmp0);
	    }
	static CH1 tmp = 
	        {
	            .kind = CH1_left_PRESENT,
	            .u = { .left = 1}
	        };
			
		result = CH1_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case ch1_1 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'ch1_1' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'ch1_1' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'ch1_1' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'ch1_1'\n");
			}
			printf("Test Value was ch1_1 CH1 ::= left:1\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	static CH1 tmp0;
	        CH1_Initialize(&tmp0);
	    }
	static CH1 tmp = 
	        {
	            .kind = CH1_right_PRESENT,
	            .u = { .right = RGBCOLORS_red}
	        };
			
		result = CH1_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case ch1_2 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'ch1_2' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'ch1_2' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'ch1_2' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'ch1_2'\n");
			}
			printf("Test Value was ch1_2 CH1 ::= right:red\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	OTHERCOLORS tmp0;
	        OTHERCOLORS_Initialize(&tmp0);
	    }
	OTHERCOLORS tmp = 
	        OTHERCOLORS_red;
			
		result = OTHERCOLORS_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case othercolors_1 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'othercolors_1' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'othercolors_1' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'othercolors_1' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'othercolors_1'\n");
			}
			printf("Test Value was othercolors_1 OTHERCOLORS ::= red\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	OTHERCOLORS tmp0;
	        OTHERCOLORS_Initialize(&tmp0);
	    }
	OTHERCOLORS tmp = 
	        OTHERCOLORS_cyan;
			
		result = OTHERCOLORS_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case othercolors_2 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'othercolors_2' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'othercolors_2' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'othercolors_2' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'othercolors_2'\n");
			}
			printf("Test Value was othercolors_2 OTHERCOLORS ::= cyan\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	OTHERCOLORS tmp0;
	        OTHERCOLORS_Initialize(&tmp0);
	    }
	OTHERCOLORS tmp = 
	        OTHERCOLORS_magenta;
			
		result = OTHERCOLORS_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case othercolors_3 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'othercolors_3' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'othercolors_3' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'othercolors_3' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'othercolors_3'\n");
			}
			printf("Test Value was othercolors_3 OTHERCOLORS ::= magenta\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	static CH2 tmp0;
	        CH2_Initialize(&tmp0);
	    }
	static CH2 tmp = 
	        {
	            .kind = CH2_left_PRESENT,
	            .u = { .left = 1}
	        };
			
		result = CH2_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case ch2_1 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'ch2_1' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'ch2_1' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'ch2_1' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'ch2_1'\n");
			}
			printf("Test Value was ch2_1 CH2 ::= left:1\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	static CH2 tmp0;
	        CH2_Initialize(&tmp0);
	    }
	static CH2 tmp = 
	        {
	            .kind = CH2_center_PRESENT,
	            .u = { .center = OTHERCOLORS_red}
	        };
			
		result = CH2_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case ch2_2 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'ch2_2' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'ch2_2' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'ch2_2' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'ch2_2'\n");
			}
			printf("Test Value was ch2_2 CH2 ::= center:red\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	CH2_left tmp0;
	        CH2_left_Initialize(&tmp0);
	    }
	CH2_left tmp = 
	        1;
			
		result = CH2_left_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case ch2_left_1 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'ch2_left_1' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'ch2_left_1' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'ch2_left_1' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'ch2_left_1'\n");
			}
			printf("Test Value was ch2-left_1 CH2-left ::= 1\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	CH2_left tmp0;
	        CH2_left_Initialize(&tmp0);
	    }
	CH2_left tmp = 
	        10;
			
		result = CH2_left_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case ch2_left_2 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'ch2_left_2' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'ch2_left_2' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'ch2_left_2' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'ch2_left_2'\n");
			}
			printf("Test Value was ch2-left_2 CH2-left ::= 10\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	CH1_left tmp0;
	        CH1_left_Initialize(&tmp0);
	    }
	CH1_left tmp = 
	        1;
			
		result = CH1_left_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case ch1_left_1 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'ch1_left_1' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'ch1_left_1' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'ch1_left_1' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'ch1_left_1'\n");
			}
			printf("Test Value was ch1-left_1 CH1-left ::= 1\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

	{
	    {
	        // dummy statement used for calling init functions
	CH1_left tmp0;
	        CH1_left_Initialize(&tmp0);
	    }
	CH1_left tmp = 
	        10;
			
		result = CH1_left_enc_dec(&tmp, &errCode);
		if (!result) {
			switch(errCode)
			{
			case 1:
				printf("Test case ch1_left_2 failed in encoding\n");
				break;
			case 2:
				printf("Test case 'ch1_left_2' failed in decoding\n");
				break;
			case 3:
				printf("Test case 'ch1_left_2' failed in the validation of the decoded message\n");
				break;
			case 4:
				printf("Test case 'ch1_left_2' failed. Encoded and decoded messages are different\n");
				break;
			default:
				printf("Unexpected error code in test case 'ch1_left_2'\n");
			}
			printf("Test Value was ch1-left_2 CH1-left ::= 10\n");
			printf("========================================\n");
			totalErrors = totalErrors + 1;
		};
	}

    if (totalErrors > 0 ) {
        printf("%d out of 14 failed.", totalErrors); 
        return 1;
    } else {
        printf("All test cases (14) run successfully."); 
        return 0;
    };

}
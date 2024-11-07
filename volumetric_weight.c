/*********************************
*
* Name: dweight
* Purpose: calculate volumetric weight
* Author: Minbu5
*
*********************************/

#include <stdio.h> 

// Macros
#define VOLUMETRIC_FACTOR_CM  5000  
#define VOLUMETRIC_FACTOR_CM_UPROUNDER 4999

int main(void)
{
	int height, width, lenght, volume_weight_uprounded;
	float volume_weight;
	
	
	// Take parameter from user
	printf("Enter height, width and lenght rounded in cm: ");
	scanf("%d %d %d", &height, &width, &lenght);
	// printf("%d %d %d", height, width, lenght);
	
	// volume = height * width * lenght
	// volume_weight = volume/VOLUMETRIC_FACTOR, to have int result up rounded add value VOLUMETRIC_FACTOR_UPROUNDER to volume
	volume_weight_uprounded = (height * width * lenght + VOLUMETRIC_FACTOR_CM_UPROUNDER)/VOLUMETRIC_FACTOR_CM;	
	
	// True not rounded value
	volume_weight = (float) height * width * lenght/VOLUMETRIC_FACTOR_CM;
	
	printf("Volumetric charged weight (true) for your parcell is: %d (%.4f)kg\n", volume_weight_uprounded, volume_weight);

	
	return 0;
}	
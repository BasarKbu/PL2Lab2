#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//This program calculates the body mass index
void body_index(float W,float H){
	float Body_mass_index = W / (H*H); 
	
	if(0 < Body_mass_index && Body_mass_index < 18)
	printf("You are slim. \n");
    else if(18 < Body_mass_index && Body_mass_index < 25)
	printf("You are Normal. \n");
    else if(25 < Body_mass_index && Body_mass_index < 30)
	printf("You are Overweight. \n");
	else
	printf("You are obese. \n");
	
	
	printf("Your body_mass_index is:%f \n",Body_mass_index);
	
}

int main(){
	
	float weight,height;
	printf("Enter your height: \n"); scanf("%f",&height);
	printf("Enter your weight: \n"); scanf("%f",&weight);
	body_index(weight,height);
	
	return 0;
}

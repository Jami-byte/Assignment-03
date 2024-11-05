#include<stdio.h>

int main(){
	int Maths, Science;
	
	printf("Enter Marks of Maths");
	scanf("%d", &Maths);
	
	printf("Enter Marks of Science");
	scanf("%d", &Science);
	
	if(Maths >= 50 && Science >= 50){
		printf("You are egligible for admission");

         if(Maths >= 80 && Science >= 80){
			  
		printf(" and Scholarship");
    }
}
           if (Maths < 50 && Science < 50){
    	      printf("You are not egligible for admission and Scholarship\n");
	}
    return 0;
}
	
	



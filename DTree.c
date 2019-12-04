#include "stdio.h"
#include "string.h"
#include "DTree.h"
#include "boolean.h"

int main(){
	void Fill(Place *X){
		printf("Enter place name		: "); scanf(" %[^\n]%*c", &(*X).name);
		printf("Enter place comfort level 	: "); scanf("%f", &(*X).comfort);
		printf("Enter place distance 		: "); scanf("%f", &(*X).distance);
		printf("Enter price to get in 		: "); scanf("%f", &(*X).price);
		printf("\n");
	}

	void Print(Place X){
		printf("name : %s\n", X.name);
		printf("comfort level : %2.f\n", X.comfort);
		printf("distance : %2.f\n", X.distance);
		printf("price : %2.f\n", X.price);
	}

	Place A;
	Place B;
	Place C;

	printf("welcome to ``Place to Study`` decision program \n");


printf(" _____  _                  _           _____ _             _\n");       
printf("|  __ \\| |                | |         / ____| |           | |\n");      
printf("| |__) | | __ _  ___ ___  | |_ ___   | (___ | |_ _   _  __| |_   _\n"); 
printf("|  ___/| |/ _` |/ __/ _ \\ | __/ _ \\   \\___ \\| __| | | |/ _` | | | |\n");
printf("| |    | | (_| | (_|  __/ | || (_) |  ____) | |_| |_| | (_| | |_| |\n");
printf("|_|    |_|\\__,_|\\___\\___|  \\__\\___/  |_____/ \\__|\\__,_|\\__,_|\\__, |\n");
printf("                                                              __/ |\n");
printf("                                                             |___/\n"); 


	printf("Enter 3 choises for your place\n");
	printf("Input First Place\n");
	Fill(&A);
	printf("Input Second Place\n");
	Fill(&B);
	printf("Input Third Place\n");
	Fill(&C);

	printf("I think you should go to \n");
	if (A.comfort > B.comfort && A.comfort > C.comfort){
		Print(A);
	}
	else if (B.comfort > A.comfort && B.comfort > C.comfort){
		Print(B);
	}
	else if (C.comfort > A.comfort && C.comfort > B.comfort){
		Print(C);
	}
	else if (A.comfort == B.comfort && A.comfort > C.comfort){
		if(A.distance < B.distance){
			Print(A);
		}
		else if (A.distance > B.distance){
			Print(B);
		}
		else{ //comfort level and distance are the same between A and B
			if(A.price < B.price){
				Print(A);
			}
			else{
				Print(B);
			}
		}
	}
	else if (A.comfort == C.comfort && A.comfort > B.comfort){
		if(A.distance < C.distance){
			Print(A);
		}
		else if (A.distance > C.distance){
			Print(C);
		}
		else{ //comfort level and distance are the same between A and C
			if(A.price < C.price){
				Print(A);
			}
			else{
				Print(C);
			}
		}
	}
	else if (B.comfort == C.comfort && B.comfort > A.comfort){
		if(B.distance < C.distance){
			Print(B);
		}
		else if (A.distance > C.distance){
			Print(C);
		}
		else{ //comfort level and distance are the same between B and C
			if(B.price < C.price){
				Print(B);
			}
			else{
				Print(C);
			}
		}
	}
	else if (B.comfort == C.comfort && B.comfort == A.comfort){
		if(A.distance < B.distance && A.distance < C.distance){
			Print(A);
		}
		else if(B.distance < A.distance && B.distance < C.distance){
			Print(B);
		}
		else if(C.distance < A.distance && C.distance < B.distance){
			Print(C);
		}
		else if(A.distance == B.distance && A.distance < C.distance){
			if(A.price < B.price){
				Print(A);
			}
			else{
				Print(B);
			}
		}
		else if(A.distance == C.distance && A.distance < B.distance){
			if(A.price < C.price){
				Print(A);
			}
			else{
				Print(C);
			}
		}
		else if(B.distance == C.distance && B.distance < A.distance){
			if(B.price < C.price){
				Print(B);
			}
			else{
				Print(C);
			}
		}
		else if (A.distance == B.distance && A.distance == C.distance){
			if(A.price < B.price && A.price < C.price){
				Print(A);
			}
			else if (B.price < A.price && B.price < C.price){
				Print(B);
			}
			else{
				Print(C);
			}
		}
	}
	return 0;
}

#include <stdio.h>
#include <math.h>

int compute_surface_area();
double compute_diagonal();

int main(void) {
    int length, width, height, surfaceArea; 
    double diagonal; 

	printf("Enter length: ");
    scanf("%d", &length);

	printf("Enter width : ");
    scanf("%d", &width);

	printf("Enter height: ");
    scanf("%d", &height);

	surfaceArea = compute_surface_area(length, width, height);
    diagonal = compute_diagonal(length, width, height);
    printf("Surface area = %d\n", surfaceArea);
    printf("Diagonal = %.2f\n", diagonal);

	return 0;
}

//this function computes the surface area with users' input of length, width and height
int compute_surface_area(int length, int width, int height){
   
   return 2 * (length * width + width * height + length * height);
}

//this function computes the diagonal length of the box using users' input and pythagoras' theorem
double compute_diagonal (int length, int width, int height){
    double diagonal;

    diagonal = sqrt(height * height + length * length + width * width);

    return diagonal;
}
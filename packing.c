
#include <stdio.h>

int compute_max_slabs();

int main(void) {
	int max_slabs, tray_length, tray_width, slab_length, slab_width;

	printf("Enter dimension of tray: ");
    scanf("%d %d", &tray_length, &tray_width);

	printf("Enter dimension of slab: ");
    scanf("%d %d", &slab_length, &slab_width);

	// Compute maximum no. of slabs that can fit in tray
    max_slabs = compute_max_slabs(tray_length, tray_width, slab_length, slab_width);

	printf("Maximum number of slabs = %d\n", max_slabs);

	return 0;
}

//this function computes the maximum number of slabs of input dimension that can be packed into the tray of input dimention
int compute_max_slabs(int tray_length, int tray_width, int slab_length, int slab_width){
    int orient1, orient2; 
    //orient1 refers to when slab length lined against tray length, orient2 refers to when slab length lined against tray width
    orient1 = (tray_length/slab_length) * (tray_width/slab_width);
    orient2 = (tray_length/slab_width) * (tray_width/slab_length);
    if (orient1 >= orient2)
        return orient1;
    else
        return orient2;
}

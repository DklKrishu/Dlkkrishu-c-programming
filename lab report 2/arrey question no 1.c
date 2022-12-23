void largestElement(int arr[], int size){
	int i;
	int largest = 0 ;
	for(i=0; i<size; i++){
	if(arr[i]>=largest){
		largest = arr[i];
	}
}
	printf(" the largest integer is: %d", largest);
}


void main(){
	int array[]= {1,5,6,3,4};
	int size = sizeof (array)/4;
	largestElement(array,size);
}

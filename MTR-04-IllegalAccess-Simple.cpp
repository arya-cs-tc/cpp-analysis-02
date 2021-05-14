void main(){
	int *q, *r = NULL;
	q = new int;
	*q = 3;
	r = q;
	*r += 3;
	delete q;
	if (r != NULL) {
		printf("#Output: *r = %d\n", *r);
	}
	else {
		printf("Error by r!\n");
	}
	if (q != NULL) {
		printf("#Output: *q = %d\n", *q);
	}
	else {
		printf("Error by q!\n");
	}
}
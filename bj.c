int main() {
	int i;
	i = foo(2);
	printf("Bitte Welt, %n", i);
	
	return 0;

}

int foo(int bar) {
	return bar*2;
}

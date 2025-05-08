void main(){
	int num = 1234;
	int sumNum = 0;
	
	while(num!=0){
		int temp = num%10;
		if(temp%2==0){
			sumNum+=temp;
		}
		num=num~/10;
	}
	print("Sum of even numbers is $sumNum");
}

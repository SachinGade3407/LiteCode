import java.util.Scanner;

class Demo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();


	while(number !=0){
	
		int rem=number%10;

		if(number%rem==0){
			System.out.print(rem + " ");
		}
		
		number =number/10;
	
	}
	System.out.println();

    }
}

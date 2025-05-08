// print days in week.

class Demo{

	public static void main(String[]args){

		int i=3;

		if(i==1){
			System.out.println("Monday");
		}else if(i==2){
			System.out.println("Tuesday");
		}else if(i==3){
			System.out.println("Wednesday");
		}else if(i==4){
			System.out.println("Thuesday");
		}else if(i==5){
			System.out.println("Friday");
		}else if(i==6){
			System.out.println("Saturday");
		}else if(i==0 || i<7){
			System.out.println("Invalid I/P");
		}else{
			System.out.println("Sunday");
		}
	}
}


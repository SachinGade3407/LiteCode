// Find maximun number between the 3 number.


class Demo{

	public static void main(String[]args){

		int num1=1;
		int num2=2;
		int num3=3;

		if(num1>num2 && num1>num3){
			System.out.println(num1 + " is max between " + num1 +" "+ num2 +" "+ num3);
		}else if(num2>num1 && num2>num3){
                        System.out.println(num2 + " is max between " + num1 +" "+ num2 +" "+ num3);
		}else if(num3>num1 && num3>num2){
                        System.out.println(num3 + " is max between " + num1 +" "+ num2 +" " + num3);
		}else if(num1==num2 && num1>num3){
                        System.out.println(num1 + " is max between " + num1 +" "+ num2 +" "+ num3);
		}else if(num2==num3 && num2>num1){
                        System.out.println(num2 + " is max between " + num1  +" "+ num2 +" "+ num3);
		}else if(num1==num3 && num3>num2){
                        System.out.println(num3+" is max between " + num1 +" "+ num2 +" "+ num3);
		}else{
		      	System.out.println(num1+ num2 + num3 +"are equal");
		}
	}
}

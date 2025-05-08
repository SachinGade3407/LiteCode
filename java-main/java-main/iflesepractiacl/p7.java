// Profit or Loss.


class Demo{
	public static void main(String[]prachi){
		double CP=1000000000.0;

		double SP=1000000000.0;


		if(SP>CP){
	
			System.out.println("Profit " + (SP-CP));

		}else if(SP==CP){
	
			System.out.println("NO LOSS NO PROFIT");

		}else{
		
			System.out.println("Loss " + (CP-SP));
		}
	}
}



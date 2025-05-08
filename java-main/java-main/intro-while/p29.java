/* Given an integer I/P A which represent unit of electricty comsumed at your house .calculate and printthe bill amount.
 */

class Demo{

	public static void main(String[]args){

		int unit=200;

		if(unit>100){
			System.out.println(100*1+(unit-100)*2);
		}else{

			System.out.println(unit*1);
		}
	}
}

/* Greater the temperture of a person is farcheit.print wheather the person has,normal,low.high.
 */

class Demo{

	public static void main(String[]args){

		float x=98.6f;
		float y=98.0f;

		if(x>y){
			System.out.println("Temperture is high");
		}else if(y>x){
			System.out.println("Temperture is Normal");
		}else{
			System.out.println("Temperture is low");
		}
	}
}

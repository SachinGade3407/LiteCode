class ICC{
	ICC(){
		System.out.println("IN ICC Constructor");
	}
}
class BCCI extends ICC{
	BCCI(){
		System.out.println("IN BCCI Constructor");
	}
}
class Client{
	public static void main(String[]args){
		BCCI jayShah = new BCCI();
	}
}

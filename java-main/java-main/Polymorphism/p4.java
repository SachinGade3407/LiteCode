abstract class Parent{
	void career(){
		System.out.println("Doctor");
	}
	abstract void mary();
}
child class extends Parent{
	void mary(){
		System.out.println("Alka Kabul");
	}
}
class Client{
	public static void main(String[]args){
		child obj2=new chili();
		obj2.career();
		obj2.mary();
	}
}


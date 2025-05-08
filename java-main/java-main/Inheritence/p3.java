class Defence{
	Defence(){
		System.out.println(this);
		System.out.println("In Defence Constructor/Parent");
	}
	void DefenceForce(){
		System.out.println("Guns,Ak40,FireHouse");
	}
}
class Army extends Defence{
	Army(){
		System.out.println(this);
		System.out.println("In Army Constructor/child");
	}
}
class Demo{
	public static void main(String[]args){
		Army ind = new Army();
		System.out.println(ind);
		ind.DefenceForce();
	}
}


class Player{
	private int jerNo=0;
	private String name=null;
	Player(int jerNo,String name){
		this.jerNo=jerNo;
		this.name=name;
		System.out.println("In Constructor");
	}
	void PlayerInfo(){
		System.out.println(jerNo +"= "+ name);
	}
}
class Client{
	public static void main(String[]args){
	Player obj1=new Player(18,"Virat");
	obj1.PlayerInfo();

	Player obj2=new Player(07,"MSD");
	obj2.PlayerInfo();
	
	Player obj3=new Player(45,"Rohit");
	obj3.PlayerInfo();
	}
}


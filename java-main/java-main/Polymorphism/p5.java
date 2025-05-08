abstract class ICC{
	void TeamRule(){
		System.out.println("International Rule");
	}
	abstract void PlayerRule();
}
class BCCI extends ICC{
	void PlayerRule(){
		System.out.println("Indian Cricket Rule");
	}
}
class Match{
	public static void main(String[]args){
		BCCI obj=new BCCI();
		obj.TeamRule();
		obj.PlayerRule();
	}
}



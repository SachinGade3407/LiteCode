enum LineUp{
	Rohit,
	Gilll,
	Virat,
	KLRahul,
	Ishan,
	Pandya;
	public static void main(String[]args){
		LineUp player = LineUp.Virat;
		switch(player){
			case Rohit:
				System.out.println("Sharma");
				break;
			case Gilll:
				System.out.println("Sara...");
				break;
			case Virat:
				System.out.println("Kohli");
				break;
			case KLRahul:
				System.out.println("Anna");
				break;
			case Ishan:
				System.out.println("Kishan");
				break;
			case Pandya:
				System.out.println("Hard");
				break;
			default:
				System.out.println("No Player");
		}
	}
}


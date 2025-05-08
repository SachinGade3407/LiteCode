interface Demo{
	static void fun(){
		System.out.println("In Demo fun");
	}
	default void fun(){
		System.out.println("In fun Demo");
	}
}

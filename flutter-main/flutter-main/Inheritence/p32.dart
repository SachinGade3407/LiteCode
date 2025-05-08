class Demo{
	Demo._private(){
		print("constructor");
	}
	factory Demo(){	
		print("factory");
		return Demo._private();
	}
	void fun(){
		print("fun");
	}
}


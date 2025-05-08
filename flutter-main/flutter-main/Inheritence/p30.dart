class Demo{
	Demo._private(){
		print("in Constructor");
	}
	factory Demo(){
		print("factory");
		return Demo._private();	
	}
}


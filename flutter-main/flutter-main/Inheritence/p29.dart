class Demo{
	static Demo obj1 = new Demo();
	factory Demo(){
		print("In facotry");
		return obj1;
	}
}
void main(){
	Demo obj = new Demo();
}


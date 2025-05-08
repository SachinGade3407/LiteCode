class Outer{
        class Inner{
                void M1(){
                        System.out.println("In M1 Inner");
                }
        }
        void M2(){
                System.out.println("In M2 Outer");
        }
}
class client{
        public static void main(String[]args){
		Inner obj=new Outer.new Inner();
		obj.M1();
	}
}



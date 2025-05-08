class Demo{
        void marry(){
                System.out.println("Kriti Sanon");
        }
}
class client{
        public static void main(String[]args){
                Demo obj=new Demo(){
                        void marry(){
                                System.out.println("Disha Patni");
				fun();
                        }
			void fun(){
				System.out.println("In fun");
			}

                };
                obj.marry();
        }
}



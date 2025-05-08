class Demo{

        public static void main(String[]args){

                int x=4;
		int a=1;
		int b=2;

                switch(x){


                        case a:
                                System.out.println("One");
				break;
                        case b:
                                System.out.println("Two");
				break;
                        case a+b:
                                System.out.println("Three");
				break;
                        case a+a+b:
                                System.out.println("Four");
				break;
			//constant expression required
			case a+a+a+b:
				     System.out.println("Five");
				break;
                        default :
                                System.out.println("No Match");
				break;
                }
                System.out.println("After switch");
        }
}



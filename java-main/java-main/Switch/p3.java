class Demo{

        public static void main(String[]args){

                int x=4;

                switch(x){


                        case 1:
                                System.out.println("One");
				break;
                        case 1+1:
                                System.out.println("Two");
				break;
                        case 1+2:
                                System.out.println("Three");
				break;
                        case 4:
                                System.out.println("Four");
				break;
                        case 1+4:
                                System.out.println("Five");
				break;
                        default :
                                System.out.println("No Match");
				break;
                }
                System.out.println("After switch");
        }
}



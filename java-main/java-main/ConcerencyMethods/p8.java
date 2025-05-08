class MyThread implements Thread{
	public void run(){
		System.out.println(Thread.currentThread());
		try{
                        Thread.sleep(5000);
                }catch(InterruptedException ie){
                        System.out.println(ie.toString());
                }
        }
}
class ThreadGroupDemo{
        public static void main(String[]args)throws InterruptedException{
                ThreadGroup pThreadGP=new ThreadGroup("India");
                MyThreadGroup obj1=new MyThread();
                MyThreadGroup obj2=new MyThread();
		Thread t1= new Thread(pThreadGP,obj1,"Maha");
		Thread t2= new Thread(pThreadGP,obj2,"Goa");
                t1.start();
		t1.start();
                        }
}



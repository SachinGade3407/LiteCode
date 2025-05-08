class MyThread extends Thread{
	MyThread(ThreadGroup tg,String str){
		super(tg,str);
	}
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
		MyThreadGroup t1=new MyThread(pThreadGP,"Maha");
		MyThreadGroup t2=new MyThread(pThreadGP,"Goa");
		t1.start();
		t2.start();
		cThreadGP.Interrupt();
		System.out.println(pThreadGP.activeCount());
		System.out.println(pThreadGP.activeGroupCount());
	}
}






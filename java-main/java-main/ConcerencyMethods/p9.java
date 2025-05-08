//Threadpool.....


import java.util.concurrent.*;
class MyThread implements Thread{
	int num;
	MyThread(int num){
		this.num=num;
	}
	public void run(){
		System.out.println(Thread.currentThread()+"Start Thread :"+ num);
		displayTask();
		System.out.println(Thread.currentThread()+"End Thread :"+ num);
	}
	void  displayTask(){
		try{
			Thread.sleep(5000);
		}catch(InterruptedException ie){
		}
	}
}
class ThreadpoolDemo{
	public static void main(String[]args){
		ExecuterServices ser= Executers.newFixedThreadpool();
		for(int i=1;i<=8;i++){
			MyThread obj=new MyTHread(i);
			ser.execute(obj);
		}
		ser.Shutdown();
	}
}



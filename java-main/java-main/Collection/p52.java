import java.util.concurrent.*;
class Producer implements Runnable{
	BlockingQueue bQueue = null;
	Producer(BlockingQueue bQueue){
		this.bQueue=bQueue;
	}
	public void run(){
		for(int i=1;i<=10;i++){
			try{
				bQueue.put(i);
				System.out.println("Producer"+ i);
			}catch(InterruptedException ie){

			}

			try{
				Thread.sleep(5000);
			}catch(InterruptedException ie){
			}
		}
	}
}
class Consumer implements Runnable{
	BlockingQueue bQueue=null;
	Consumer(BlockingQueue bQueue){ 
		this.bQueue=bQueue;
	}
	public void run(){
		for(int i=1;i<=10;i++){
			try{
				bQueue.take();
				System.out.println("Consumer" + i);
			}catch(InterruptedException ie){
			
			}try{
				Thread.sleep(4000);
			}catch(InterruptedException ie){
			}
		}
	}
}
class ProducerConsumer{
	public static void main(String[]args){
		BlockingQueue bQueue = new ArrayBlockingQueue(3);
		Producer produce = new Producer(bQueue);
		Consumer consume = new Consumer(bQueue);

		Thread producerThread = new Thread(produce);
		Thread consumerThread = new Thread(consume);

		producerThread.start();
		consumerThread.start();
	}
}


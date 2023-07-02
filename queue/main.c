#include "queue.h"

int main(void){
    queue_t queue;
    
    queue_init(&queue,4);
    //入队
    for(int i =10; i <=40; i += 10){
	if(!queue_full(&queue))
	    queue_push(&queue,i);//入队10，20，30，40
    }
    printf("队列有效数据个数为：%d\n",queue_size(&queue));

    //出队两个数据 10 20 
    for(int i = 0; i < 2; i++){
        if(!queue_empty(&queue))
	    printf("%d ",queue_pop(&queue));
    }
    printf("\n");
    printf("队列有效数据个数为：%d\n",queue_size(&queue));
     
    //入队两个数据50，60
    for(int i = 50 ; i <= 60; i += 10){
	if(!queue_full(&queue))
	    queue_push(&queue,i);
    }

    //出队
    while(!queue_empty(&queue))
        printf("%d ",queue_pop(&queue));//30 40 50 60
    printf("\n");
    queue_deinit(&queue);
    
    return 0;

}

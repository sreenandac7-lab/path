#include<stdio.h>
#define SIZE 5

int queue[5];   //an array to store queue data
int front = -1;    //to represent queue 'front'
int rear=-1;         // to represent queue 'rear'

//method function
int isFull(){
    if(rear==SIZE -1)
    {
        printf("queue is full...can't store further data");
        return 1;
    }
    return 0;
}
void enqueue(int newdata)
{
    if(isFull())
    {
        //overflow
        printf("queue is full......\n");
    }
    else
    {
        // insert new data
        rear++;
        queue[rear] = newdata;
        printf("Data inserted....\n");
    }
}
// method to check underflow condition
int isEmpty(){
    if(front==-1 && rear==-1){
        printf("queue is empty..");
        return 1;
    }
    return 0;
}

// Function to dequeue data from the queue
int retrieved_data;
void dequeue()
{
    if (isEmpty())
    {
        printf("queue is empty..no data present \n");
    }
    else
    {
        front++;
        int retrieved_data=queue[front];
        printf("retrieved data: %d", &retrieved_data);
    }
}

// Function to display queued elements
void display_queue()
{
    int i;

    if (front == -1)
    {
        printf("queue is empty.\n");
    }
    else
    {
        printf("queued elements are:\n");

        for (i = front; i >= 0; i--)
        {
            printf("%d\n", queue[i]);
        }
    }
}

// Main function
int main()
{
    int option, myqueue;

    do
    {
        printf("\n1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. Display queue\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        printf("Enter the queued data: ");
        scanf("%d", &myqueue);

        switch (option)
        {
            case 1:
                enqueue(myqueue);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display_queue();
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (option != 4);

    return 0;
}



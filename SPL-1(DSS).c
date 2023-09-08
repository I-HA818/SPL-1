#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>
#include <unistd.h>
#include<windows.h>
#include<string.h>

                        void simulateArray();
                        void simulateStack();
                        void simulateQueue();
                        void simulateLinkedList();
                         void simulateTree();
                         void simulateGraph();


void MENU(){
    system("clear || cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     int choice;
      SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN );
        printf("                                                  DATA STRUCTURES\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        printf("                                                         |\n");
        printf("                                                         |\n");
        printf("                                                         |\n");
        printf("                                                         |\n");
        printf("                                      ----------------------------------------\n");
        printf("                                      |                                      |\n");
        printf("                                      |                                      |\n");
        printf("                                      |                                      |\n");
         SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        printf("                            Linear Data Structures               Non-Linear Data Structures\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        printf("                                      |                                      |\n");
        printf("                                      |                                      |\n");
        printf("                  -------------------------------------              -----------------\n ");
        printf("                 |            |            |         |              |                |\n");
         SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        printf("               1.Array    2.Stack       3.Queue  4.Linked List    ");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
         SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
         printf("5.Tree           6.Graph\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        printf("         \n \n                                ");


                while (1) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                printf("GREEN ");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                printf("means that data structure is available for simulation.\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                printf("                                  RED ");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                printf("means that data structure is not ready for simulation.\n");
                printf("\nEnter the corresponding number of the data structure you want to know about");
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                printf(" (0 for exit):");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                scanf("%d", &choice);
                switch (choice) {
                    case 1:
                        simulateArray();
                        break;
                    case 2:
                        simulateStack();
                        break;
                    case 3:
                        simulateQueue();
                        break;
                    case 4:
                        simulateLinkedList();
                        break;
                    case 5:
                        simulateTree();
                        break;
                    case 6:
                        simulateGraph();
                        break;
                    default:
                        printf("Invalid choice.\n");

                   break;


                   case 0:
                       {
                            system("clear || cls");
                             SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                           printf("  \n\n\n\n\n\n\n                                                        ****THANK YOU****\n\n\n\n\n\n              ");
                              SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
                            exit(0);
                       }


             }

        printf("                                                    \nPress Enter to continue...\n");
        getchar(); // Wait for Enter key
        getchar(); // Clear any remaining newline characters
    }

}
void displayDefinitions() {
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    printf("\n\nWhat is a data structure?\n");
    printf("A data structure is a storage that is used to store and organize data.\nIt is a way of arranging data on a computer so that it can be accessed and updated efficiently..\n");
    printf("There are two types of data structures.These are \n1.Linear data structures &\n2.Non-linear data structures.\n\n\n");


    int blink;
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);

      while (!_kbhit()) { // Continue blinking until a key is pressed
        if (blink) {
            printf(" Press enter to continue\r ");
        } else {
            printf("                           \r"); // Clear the text
        }

        blink = !blink; // Toggle the blink state
        Sleep(400);     // Adjust the duration of each blink (in milliseconds)
    }
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    getchar();
    system("clear || cls");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("=> Linear data structure ");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("is a data structure in which data elements are arranged sequentially or linearly,\nwhere each element is attached to its previous and next adjacent elements, is called a linear data structure. Examples of linear data structures are array, stack, queue, linked list, etc.\n\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("=> Non linear data structures");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf(" are where data elements are not placed sequentially or linearly are called non-linear data structures.\nIn a non-linear data structure, we can't traverse all the elements in a single run only. Examples of non-linear data structures are trees and graphs.\n\n\n");

}

void simulateArray() {
    int n,i,j,m,k;
    int choice;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char str[10];
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    tryAgain1:
    printf("                             1.Read about stack   2.Go to simulation\n\n");
    read_sim:
          SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("Type 'read' for 1 or type 'sim' for 2\n");
    scanf("%s",str);
    getchar();

   if(!strcmp(str,"sim")){

    system("clear || cls");
    simArray:
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    m=2*n;
    int array[n];
    printf("this is how the array looks like: \n\n");
     SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("index ---->  ");
     SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE |FOREGROUND_RED );
    for(i=0;i<n;i++){
    if (i==0) printf("\t  %d    ",i);

    else if(i>=10) printf("%d   ",i);
    else printf("%d    ",i);
    }
    printf("\n");

   for(i=0;i<n;i++){
   		if(i==0) printf("\t         ____");
   	               else    printf(" ____");
   }
   printf("\n");
         SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN );
         printf("elements --->");
         SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE |FOREGROUND_RED );

    for(i=0;i<n;i++){
    		if(i==0) printf("\t|____|");
    		else printf("____|");

    	}
    	printf("\n\n");


    	for(i=0;i<n;i++){
    	    	printf("Enter the element %d of the array: ",i+1);
    		scanf("%d",&array[i]);
    		printf("After iteration %d the array looks like:\n",i+1);

	        printf("\n");
    		 if(i==0)        printf("| %d  |",array[i]);
    		else {
    			for(j=0;j<i;j++) {
    			if(j==0) printf("| %d  |",array[j]);
    			     else printf(" %d  |",array[j]);
    			}
    			          printf(" %d  |",array[i]);
    		}
    		for(k=i+1;k<n;k++){
    			           printf("    |");
    		}
    		printf("\n");


	        printf("\n");

	        if(i!=n-1){
    		tryAgain:
    		printf("continue(1) or MENU(0)\n");
    		scanf("%d",&choice);

    		if(choice==0){
    		for(i=0;i<n;i++){
    			array[i]=-1;
    		}
    		     system("clear || cls");
    		     MENU();
    		}
    		else if(choice==1) continue;
    		else {
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
    		printf("Invalid choice,try again.\n");
    		 SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    		goto tryAgain;
    		}
    		}
    		else {
    			printf("Array is full\n");
    			break;
    		}
    	}
    	printf("\n");
    	printf("enter to continue\n");
    	getchar();
    	getchar();
    MENU();
   }
   else if(!strcmp(str,"read")){
        printf("An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).\n");
    printf("\nPress enter to continue.\n");
    getchar();
     system("clear || cls");
    goto simArray;

   }
    else {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("INVALID INPUT!! Please try again\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    goto tryAgain1;
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);


}

int stack[10];
int top=-1;
void push(int x){
    if(top==9){
        printf("Can not pop any item cause the stack is currently empty.");
        return;
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("Stack is empty.");
        return;
    }
    else{
        int item=stack[top];
        top--;
        printf("The popped item is : %d\n",item);
    }
}
void displayStack(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if(top==-1){
            printf("            |____|\n");
    return;
    }
    else{
        printf("Currently the stack looks like this:\n\n");
    for(int i=top;i>=0;i--){
            if(i==top)  {
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                    printf("       TOP--->");
                    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    printf("   |%d  |",stack[i]);
                    printf("\n");
            }
    else{
        printf("                 |%d  |\n",stack[i]);


    }

    }
    }
   // printf("                 ------\n");
    printf("\n\n");
}
void simulateStack() {
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char str[10];
    tryAgain1:
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("                             1.Read about stack   2.Go to simulation\n\n");
    read_sim:
          SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("Type 'read' for 1 or type 'sim' for 2\n");
    scanf("%s",str);
    getchar();
     if(!strcmp(str,"sim")){
            simStack:
         printf("\nWe can do certain operations on an array ,such as push(insertion) and pop(deletion).Do you want to simulate the stack operations?\n (yes(1)/no(2)\n ");
     int choice;
     int choice2;
     int n;
     scanf("%d", &choice);
     system("clear || cls");
     while(1){
                switch (choice) {
                    case 1:


                        printf("The stack is currently empty with zero elements.\n\n");
                        displayStack();

                        label:
                        printf("What do you want to simulate?\n");
                        printf("1.PUSH.\n2.POP.\nPRESS 3 for MENU\n");
                        scanf("%d",&choice2);
                        if(choice2==1){
                            {
                                int x;
                                int c;
                                for(int i=0;i<10;i++){

                                    printf("Enter an element to push: ");
                                    scanf("%d",&x);

                                push(x);
                                displayStack();
                                again:
                                printf("Continue?(1) or No(0)?\n");
                                scanf("%d",&c);
                                if(c==0){
                                        goto label;
                                    break;
                                }
                                else if(c==1) continue;
                                else {
                                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                                        printf("Wrong command!\n");
                                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

                                    goto again;
                                }
                                }
                            }
                        }
                        else if(choice2==2){
                            int c;

                                for(int i=0;i<10;i++){
                                    printf("Press enter to pop: ");
                                    getchar();
                                    getchar();
                                pop();
                                displayStack();
                                printf("Continue?(1) or No(0)?\n");
                                scanf("%d",&c);
                                if(c==0){
                                        goto label;
                                    break;
                                }
                                else continue;
                                }
                            }
                            else if(choice2==3)
                            {

                                while(top!=-1){
                                top--;
                                    }
                                    system("clear || cls");
                                MENU();
                            }


                            case 2:
                                system("clear || cls");
                        MENU();
                        }
                        break;
                        }
     }

    else if(!strcmp(str,"read")){
             printf("Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) \nor FILO(First In Last Out). LIFO implies that the element that is inserted last, comes out first and FILO implies that the element that is inserted first, comes out last.\n");
            goto simStack;
    }
    else {

        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("INVALID INPUT!! Please try again\n");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    goto tryAgain1;
    }


}

int queue[10];
int front=-1;
int rear=-1;

void enqueue(int x){
    if(rear==9){
        printf("queue overflow.");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("The queue is empty.\n");
    }
    else if(front==rear){
         front=rear=-1;
         printf("The dequeued element is %d\n",queue[front]);
    }
    else{
        printf("The dequeued item is: %d\n",queue[front]);
        front++;
        //rear ++;
    }
}
void displayQueue(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if(front==-1 && rear==-1){
        printf("The queue is empty.\n");
    }
    else{
        printf("The current state of the queue is : \n\n\n");
        for(int i=front;i<=rear;i++){
                if(i==front){
                         SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                         printf("        \tFront--> ");
                         SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN |FOREGROUND_BLUE);
                    printf(" %d  ",queue[i]);
                }
                    else if(i==rear) {
                       printf(" %d ",queue[i]);
                    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                         printf("<--rear");
                         SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                    }
                        else
                            printf("%d  ",queue[i]);
        }
        printf("\n\n");
    }
}

void simulateQueue() {
     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     char str[10];
     int n;
    tryAgain1:
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("                             1.Read about queue   2.Go to simulation\n\n");
    read_sim:
          SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("Type 'read' for 1 or type 'sim' for 2\n");
    scanf("%s",str);
   // getchar();

    if(!strcmp(str,"sim")){

       // int choice;
     int choice2;

    // scanf("%d", &choice);
    do{
        dequeue();
            }while(front!=rear);
     system("clear || cls");
     simQueue:


                      //  printf("The queue is currently empty with zero elements.\n\n");
                        displayQueue();

                        label:
                        printf("What do you want to simulate?\n");
                        printf("1.Enqueue.\n2.Dequeue.\nPRESS 3 for MENU\n");
                        scanf("%d",&choice2);
                        if(choice2==1){
                            {
                                int x;
                                int c;
                                for(int i=0;i<10;i++){

                                    printf("Enter an element to enqueue: ");
                                    scanf("%d",&x);

                                enqueue(x);
                                displayQueue();
                                again:
                                printf("\nContinue?(1) or No(0)?\n");
                                scanf("%d",&c);
                                if(c==0){
                                        goto label;
                                    break;
                                }
                                else if(c==1) continue;
                                else {
                                        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                                    printf("Wrong command!\n");
                                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
                                    goto again;
                                }
                                }
                            }
                        }
                        else if(choice2==2){
                            int c;

                                for(int i=0;i<10;i++){
                                    printf("Press enter to dequeue: ");
                                    getchar();
                                    getchar();
                                dequeue();
                                displayQueue();
                                printf("\nContinue?(1) or No(0)?\n");
                                scanf("%d",&c);
                                if(c==0){
                                        goto label;
                                    break;
                                }
                                else continue;
                                }
                            }
                            else if(choice2==3)
                            {

                                    do{
                                        dequeue();
                                    }while(front!=rear);
                                    system("clear || cls");
                                MENU();
                            }


                            //case 2:
                       // system( "clear || cls");
                       // MENU();
                        }

    if(!strcmp(str,"read")){
            do{
        dequeue();
            }while(front!=rear);
        printf("A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.\n\n\n");
      printf("\nWe can do certain operations on queue ,such as enqueue(insertion) and dequeue(deletion).\nDo you want to simulate the queue operations?\n ");


        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("             Press enter to continue\n");
    getchar();
    getchar();
    system("clear || cls");
          SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
          goto simQueue;

    }

    else {

          SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    printf("             Invalid command.Try again.\n");
          SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    goto tryAgain1;
}

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to build a linked list with n nodes
struct Node* buildLinkedList(int n) {
    if (n <= 0) {
        return NULL;
    }

    struct Node* head = NULL;
    struct Node* tail = NULL;

    for (int i = 1; i <= n; i++) {
        int data;
        printf("Enter data for node %d: ", i);
        scanf("%d", &data);

        struct Node* newNode = createNode(data);

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    return head;
}
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);

    if (head == NULL) {
        return newNode;
    }

    struct Node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;

    return head;
}

// Function to delete the last node from the linked list
struct Node* deleteFromEnd(struct Node* head) {
    if (head == NULL || head->next == NULL) {
        // List is empty or has only one node
        free(head);
        return NULL;
    }

    struct Node* current = head;
    struct Node* previous = NULL;

    while (current->next != NULL) {
        previous = current;
        current = current->next;
    }

    previous->next = NULL;
    free(current);

    return head;
}
// Function to print the linked list
void printLinkedList(struct Node* head) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    struct Node* current = head;
     SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Linked List looks like this : \n\n");
      SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("\t\t\t");
    while (current != NULL) {
        printf("%d --> ", current->data);
        current = current->next;
    }
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("NULL\n\n");
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void simulateLinkedList() {
    char str [10];
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
tryAgain:
SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("                             1.Read about Data Structures   2.Go to simulation\n\n");
    read_sim:
          SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("Type 'read' for 1 or type 'sim' for 2\n");
    scanf("%s",str);
    getchar();
    if(!strcmp(str,"sim")){
        system("clear || cls");
        simLinkedList:

    printf("Lets make a linked list.\nEnter the number of nodes: ");
    int n;
    scanf("%d", &n);
    char str[20];
    int choice;
    struct Node* head = buildLinkedList(n);
    printLinkedList(head);
         tryAgainL:
           SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN |FOREGROUND_INTENSITY);
                      printf("          1.Insertion.\t\t\t2.Deletion\n ");
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                       printf("            | \t\t\t\t|\n");
                       printf("             |\t\t\t\t|\n");
             SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                      printf("             |--Insert @end\t\t|--Delete @end\n");
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
                       printf("                |--Insert @beginning  \t |--Delete @beginning\n");
                       printf("                 |--Insert @index  \t   |--Delete @index\n");
                       printf("                   |--Insert value  \t    |--Delete value\n");
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                while(1){
                     printf("Insert or Delete?\nPress 1 to insert press 2 to delete.\n");
                     SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                            printf("Press 0 to quit\n");
                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                scanf("%d",&choice);
                    if(choice==1){
                            choice1:
                        printf("Where do you want your element to be inserted to?\n type beginning/end/index/value:");
                        scanf("%s",str);
                        if(!strcmp(str,"end")){
                            int dataToInsert;
                            printf("Enter data to insert: ");
                            scanf("%d",&dataToInsert);
                            head = insertAtEnd(head, dataToInsert);
                            printf("Linked List after insertion: ");
                            printLinkedList(head);
                        }
                        else {
                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                            printf("Not available right now.\n");
                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                            goto choice1;
                        }
                    }
                    else if(choice==2){
                            choice2:
                            printf("Where do you want your element to be inserted to?\n type beginning/end/index/value:");
                        scanf("%s",str);
                    if(!strcmp(str,"end")){
                            //system("clear ||cls");
                        head = deleteFromEnd(head);
                        printf("The last item has been deleted.");
                        printf("Linked List after deletion: ");
                        printLinkedList(head);
                    }
                    else {
                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                            printf("Not available right now.\n");
                            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
                            goto choice2;
                        }
                    }
                    else if(choice==0){
                        break;
                    }
                    else {
                            system("clear || cls");
                         SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
                      printf("Invalid choice.Try again.\n\n");
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

             goto tryAgainL;
                    }
                }
                MENU();

            }
    else if(!strcmp(str,"read")){
        printf("A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. \nThe elements in a linked list are linked using pointers :\n");
     printf("Linked lists are made of several nodes,Each node contains two parts. The first part stores the data and the second part stores the pointer to the next node.The first node is called the head.\nThe list start from the head.\nThe nodes look kinda like this:\n\n");

     printf("                               ______ ______       ______ ______       ______ ______\n");
      SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
     printf("                     Head--->");
     SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
     printf(" |Data  |Next | ---> |Data  |Next | ---> |Data  |Next |");
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
     printf(" <---NULL\n");
     SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
     printf("                               ------ ------       ------ ------       ------ ------\n");
     printf("                                      ^                   ^                   ^\n");
     printf("                                      |                   |                   |\n");
     printf("                                      |                   |                   |\n");
     SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
     printf("                                    Node                 Node               Node\n\n\n");
     printf("Enter to continue");
      SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

      getchar();
      system("clear || cls");
     goto simLinkedList;
    }
    else {
             SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("INVALID COMMAND!");
     SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
        goto tryAgain;
    }

}

void simulateTree() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     printf("A tree is a hierarchical data structure defined as a collection of nodes. Nodes represent value and nodes are connected by edges.\n A tree has the following properties: The tree has one node called root. The tree originates from this, and hence it does not have any parent.\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
    printf(" Data structure is  not available for simulation.\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}
void simulateGraph() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
     printf("A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are \nlines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).\n");
     SetConsoleTextAttribute(hConsole, FOREGROUND_RED );
    printf(" Data structure is  not available for simulation.\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

     }

int main() {

char str [10];
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


    system("clear || cls");
;
//SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
printf("\n\n\n\n");
    printf("                                            _________________________________\n");
    printf("                                            \\_______________________________/\n");
    printf("                                             |  Data Structure Simulator   |\n");
    printf("                                             |            (DSA)            |\n");
    printf("                                            /*******************************\\\n");
    printf("                                            |-------------------------------|\n\n\n");

   // SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    printf("                                            1.Read about Data Structures \n\t\t\t\t\t    2.Go to simulation\n\n");
    read_sim:
         // SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

printf("\n\n\n");
   int blink = 1;

    while (!_kbhit()) { // Continue blinking until a key is pressed
        if (blink) {
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            printf("        Type 'read' to read about data structures  or type 'sim' to directly go to simulation selection\r");
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        } else {
            printf("                                                                                                           \r");
        }

        blink = !blink;
        Sleep(300);


    }
    printf("\n");

    scanf("%s",str);
    getchar();
    system("clear || cls");
   if(!strcmp(str,"read")){
    displayDefinitions();
   }
   else if(!strcmp(str,"sim")){
    MENU();
   }
    else {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
        printf("INVALID INPUT!! Please try again\n");
        goto read_sim;
    }

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        MENU();

    return 0;
}

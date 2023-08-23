#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>


void MENU(){

     int choice;

        printf("                                                  Data Structures\n");
        printf("                                                         |\n");
        printf("                                                         |\n");
        printf("                                                         |\n");
        printf("                                                         |\n");
        printf("                                      ----------------------------------------\n");
        printf("                                      |                                      |\n");
        printf("                                      |                                      |\n");
        printf("                                      |                                      |\n");
        printf("                            Linear Data Structures               Non-Linear Data Structures\n");
        printf("                                      |                                      |\n");
        printf("                                      |                                      |\n");
        printf("                  -------------------------------------              -----------------\n ");
        printf("                 |            |            |         |              |                |\n");
        printf("               1.Array    2.Stack       3.Queue  4.Linked List    5.Tree          6.Graph\n");
        printf("         \n \n                                      ");


                while (1) {

                printf("\nEnter the corresponding number of the data structure you want to know about(0 for exit): ");
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
                       exit(0);

             }

        printf("\nPress Enter to continue...\n");
        getchar(); // Wait for Enter key
        getchar(); // Clear any remaining newline characters
    }

}
void displayDefinitions() {

    printf("=>Linear data structure is a data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure. Examples of linear data structures are array, stack, queue, linked list, etc.\n\n");
    printf("=>Non linear data structures are where data elements are not placed sequentially or linearly are called non-linear data structures. In a non-linear data structure, we can’t traverse all the elements in a single run only. Examples of non-linear data structures are trees and graphs.\n\n\n");

}

void simulateArray() {
    printf("An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).\n");
}

int stack[10];
int top=-1;
void push(int x){
    if(top==9){
        printf("Stack overflow");
        return;
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop(){
    if(top==-1){
        printf("Stack underflow.");
        return;
    }
    else{
        int item=stack[top];
        top--;
        printf("The popped item is : %d\n",item);
    }
}
void displayStack(){
    if(top==-1){
            printf("            |__|\n");

    }
    else{
        printf("Currently the stack looks like this:\n");
    for(int i=top;i>=0;i--){
        printf("                |%d |\n",stack[i]);

    }
    }
}
void simulateStack() {
     printf("Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). LIFO implies that the element that is inserted last, comes out first and FILO implies that the element that is inserted first, comes out last.\n");
     printf("\nWe can do certain operations on an array ,such as push(insertion) and pop(deletion).Do you want to simulate the array operations?\n (yes(1)/no(2)\n ");
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
                                    printf("Wrong command!\n");
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
                                MENU();

                            case 2:
                        exit(0);
                        }
                        break;
                        }


}

void simulateQueue() {
     printf("A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.\n");
}

void simulateLinkedList() {
     printf("A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers as shown in the below image:\n");
}

void simulateTree() {
     printf("A tree is a hierarchical data structure defined as a collection of nodes. Nodes represent value and nodes are connected by edges. A tree has the following properties: The tree has one node called root. The tree originates from this, and hence it does not have any parent.\n");
}
void simulateGraph() {
     printf("A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).\n");
}

int main() {




    printf("                                    Welcome to Data Structure Simulator (DSA)\n");
    printf("                                             Press Enter to continue...\n\n");
    getchar(); // Wait for Enter key

    printf("What is a data structure?\n");
    printf("A data structure is a storage that is used to store and organize data.It is a way of arranging data on a computer so that it can be accessed and updated efficiently..\n");
    printf("There are two types of data structures.These are - 1.Linear data structures & 2.Non-linear data structures.\n\n\n");
    displayDefinitions();
    printf("Press Enter to continue...\n");
    getchar(); // Wait for Enter key
    system("clear || cls");
        //system("clear || cls"); // Clear the screen
        MENU();


/*
        printf("                                                  Data Structures\n");
        printf("                                                         |\n");
        printf("                                                         |\n");
        printf("                                                         |\n");
        printf("                                                         |\n");
        printf("                                      ----------------------------------------\n");
        printf("                                      |                                      |\n");
        printf("                                      |                                      |\n");
        printf("                                      |                                      |\n");
        printf("                            Linear Data Structures               Non-Linear Data Structures\n");
        printf("                                      |                                      |\n");
        printf("                                      |                                      |\n");
        printf("                  -------------------------------------              -----------------\n ");
        printf("                 |            |            |         |              |                |\n");
        printf("               1.Array    2.Stack       3.Queue  4.Linked List    5.Tree          6.Graph\n");
        printf("         \n \n                                      ");


                while (1) {

                printf("\nEnter the corresponding number of the data structure you want to know about(0 for exit): ");
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
                       exit(0);

             }

        printf("\nPress Enter to continue...\n");
        getchar(); // Wait for Enter key
        getchar(); // Clear any remaining newline characters
    }*/

    return 0;
}

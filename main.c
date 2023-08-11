#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>

void displayDefinitions() {

    printf("=>Linear data structure is a data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure. Examples of linear data structures are array, stack, queue, linked list, etc.\n\n");
    printf("=>Non linear data structures are where data elements are not placed sequentially or linearly are called non-linear data structures. In a non-linear data structure, we can’t traverse all the elements in a single run only. Examples of non-linear data structures are trees and graphs.\n\n\n");

}

void simulateArray() {
    printf("An array is a collection of items stored at contiguous memory locations. The idea is to store multiple items of the same type together. This makes it easier to calculate the position of each element by simply adding an offset to a base value, i.e., the memory location of the first element of the array (generally denoted by the name of the array).\n");
}

void simulateStack() {
     printf("Stack is a linear data structure that follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out). LIFO implies that the element that is inserted last, comes out first and FILO implies that the element that is inserted first, comes out last.\n");
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
    int choice;


        system("clear || cls"); // Clear the screen


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

    return 0;
}

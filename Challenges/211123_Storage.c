#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Definição da estrutura para um nó da lista
struct Node {
    int start;          // Começo
    int size;           // Tamanho
    int space;          // Espaço
    struct Node *next;  // Ponteiro para o próximo nó na lista
};

// Função para criar um novo nó com um dado específico
struct Node *createNode(int start, int size, int space) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Erro ao alocar memória para o nó.\n");
        exit(1);
    }
    newNode->start = start;
    newNode->size = size;
    newNode->space = space;
    newNode->next = NULL;
    return newNode;
}

// Função para inserir um nó no início da lista
void insertAtBeginning(struct Node **head, int start, int size, int space) {
    struct Node *newNode = createNode(start, size, space);
    newNode->next = *head;
    *head = newNode;
}

/*void insertProcess(struct Node *head, int start, int size, int space) {
	struct Node *newNode = createNode(start, size, space);
	while ( head != NULL ) {
		if 					
		head = head->next
	}
}*/
// Função para imprimir os elementos da lista
void printSpace(struct Node *head) {
    while (head != NULL) {
        for (int x = head->size; x != 0; x--) {
            if (head->space == 0) {
                printf("*");
            } else
                printf("0");
        }
        head = head->next;
    }
    printf("\n");
}

void formatNodes(struct Node *head){
    while (head != NULL) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    } 
}

//FIX
void mergeNodes(struct Node *head) {
    while (head != NULL && head->next != NULL) {
        if (head->space == 1 && head->next->space == 1) {
            head->size += head->next->size;
            struct Node *temp = head->next;
            head->next = head->next->next;
            free(temp);
        } else {
            head = head->next;
        }
    }
}

void printList(struct Node *head) {
    while (head != NULL) {
        printf("(%d, %d, %d) -> ", head->start, head->size, head->space);
        head = head->next;
    }
    printf("NULL\n");
}

void simulateSpace(struct Node **head, int sizeStorage, int maxNodeSize) {
    int spaceOccupied = 0;
    int spaceMap = sizeStorage;
    while (spaceOccupied < sizeStorage) {
        int size = rand() % ((sizeStorage + 1) - spaceOccupied);
        if (size == 0 || size > maxNodeSize) continue;
        int space = rand() % 2;
        spaceMap -= size;
        insertAtBeginning(head, spaceMap, size, space);
        spaceOccupied += size;
        printf("(where): %d\n(space added): %d \n(spaceOccupied): %d \n(space type): %d\n\n", spaceMap, size, spaceOccupied, space);
    }

    mergeNodes(*head);
}
void firstFit(struct Node **head, int sizeToAdd) {
    if (*head == NULL) {
        // Handle the case where the linked list is empty
        return;
    }

    //in case first is empty
    if ((*head)->space == 1 && (*head)->size >= sizeToAdd) {
        struct Node *newNode = createNode((*head)->start, sizeToAdd, 0);
        (*head)->start += sizeToAdd;
        (*head)->size -= sizeToAdd;
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *current = *head;

    //if rest is empty
    while (current != NULL && current->next != NULL) {
        if (current->next->space == 1 && current->next->size >= sizeToAdd) {
            struct Node *newNode = createNode(current->next->start, sizeToAdd, 0);
            current->next->start += sizeToAdd;
            current->next->size -= sizeToAdd;
            newNode->next = current->next;
            current->next = newNode;
            return;
        }
        current = current->next;
    }
}

void bestFit(struct Node **head, int sizeToAdd, int storageSize) {
    if (*head == NULL) {
        // Handle the case where the linked list is empty
        return;
    }

    struct Node *bestFitNode = NULL;
    struct Node *current = *head;

    // Find the best-fit node
    int currentStep = 0;
    do {
        if (current->space == 1 && current->size == sizeToAdd + currentStep) {
            bestFitNode = current;
            break;
        }
        currentStep++;
        current = current->next;
    } while (sizeToAdd + currentStep <= storageSize);

    if (bestFitNode != NULL) {
        // Allocate memory in the best-fit node
        struct Node *newNode = createNode(bestFitNode->start, sizeToAdd, 0);
        bestFitNode->start += sizeToAdd;
        bestFitNode->size -= sizeToAdd;
        newNode->next = bestFitNode->next;
        bestFitNode->next = newNode;
    }
}

//void bestFit(struct Node **head, int sizeToAdd){}

int main() {

    srand(time(NULL));

    int option;
    int sizeToAdd;
    int sizeStorage;
    int maxNodeSize;
    struct Node *head = NULL;

    printf("Insert STORAGE size: ");
    scanf("%d", &sizeStorage);
    printf("Insert MAX_SITE size: ");
    scanf("%d", &maxNodeSize);
    simulateSpace(&head, sizeStorage, maxNodeSize);

    printList(head);
    printSpace(head);

    while (1) {
		puts("\nStatus:");
		printList(head);
		printSpace(head);
		// Main Input
		printf("\nControl Board:\n\n 1 - Occupy space (First-Fit)\n 2 - Occupy space (Best-Fit)\n 3 - Exit\n> ");
		scanf("%d", &option);

		switch (option) {
			case 1:
				puts("First-Fit, what size of process to add?");
                scanf("%d", &sizeToAdd);
                firstFit(&head, sizeToAdd);
                break;

			case 2:
				puts("Best-Fit, what size of process to add?");
                scanf("%d", &sizeToAdd);
                bestFit(&head, sizeToAdd, sizeStorage);
                break;

            case 3:
				exit(0);
                break;

			default:

				// Error Handling
				puts("Insira um valor válido (1, 2 ou 3)\n");
				break;
		}	
	}	

    // Liberar a memória alocada para os nós da lista
    while (head != NULL) {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

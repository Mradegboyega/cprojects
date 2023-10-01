#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct node - A linked list node that represents a task.
 *
 * @task: The task description.
 * @next: A pointer to the next node in the linked list.
 */
struct node {
    char task[100];
    struct node *next;
};

struct node *head = NULL;

/**
 * add_task - Adds a new task to the beginning of the linked list.
 *
 * @task: The task description.
 */
void add_task(char *task) {
    struct node *new_node = (struct node *) malloc(sizeof(struct node));
    strcpy(new_node->task, task);
    new_node->next = head;
    head = new_node;
}

/**
 * delete_task - Deletes a task from the linked list.
 *
 * @task: The task description.
 */
void delete_task(char *task) {
    struct node *current = head;
    struct node *previous = NULL;

    while (current != NULL) {
        if (strcmp(current->task, task) == 0) {
            if (previous == NULL) {
                head = current->next;
            } else {
                previous->next = current->next;
            }
            free(current);
            return;
        }
        previous = current;
        current = current->next;
    }
}

/**
 * view_tasks - Displays all the tasks in the linked list.
 */
void view_tasks() {
    struct node *current = head;

    while (current != NULL) {
        printf("%s\n", current->task);
        current = current->next;
    }
}

/**
 * main - The entry point of the program.
 *
 * Return: Always 0.
 */
int main() {
    int choice;
    char task[100];

    while (1) {
        printf("1. Add task\n");
        printf("2. Delete task\n");
        printf("3. View tasks\n");
        printf("4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter task:");
                scanf("%s", task);
                add_task(task);
                break;

            case 2:
                printf("Enter task:");
                scanf("%s", task);
                delete_task(task);
                break;

            case 3:
                view_tasks();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

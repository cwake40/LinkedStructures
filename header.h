#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Item struct for individual elements in a priority queue. 
   Includes a label for identification, an integer for priority, 
   and a pointer to the next item in the queue. */
typedef struct item {
  char *label;
  unsigned int priority;
  struct item *next;
} Item;

/* PriorityQueue struct representing a single priority queue. 
   Contains a pointer to the first item in the queue and an integer 
   for the count of items in the queue. */
typedef struct {
  Item *headItem;
  int count;
} PriorityQueue;

/* QueueElement struct for elements in the list of priority queues. 
   Contains a pointer to a priority queue, a label for identification, 
   and a pointer to the next queue element in the list. */
typedef struct queueElement {
  PriorityQueue *queue;
  char *label;
  struct queueElement *next;
} QueueElement;

/* PriorityQueuesList struct representing a list of priority queues. 
   Includes a pointer to the first element of the list and a count 
   of the number of priority queues in the list. */
typedef struct {
  QueueElement *firstElement;
  unsigned int queueCount;
} PriorityQueuesList;

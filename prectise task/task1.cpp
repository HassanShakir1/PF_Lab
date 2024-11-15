#include <stdio.h>
#include <stdlib.h>
typedef struct Box {
    int weight;            
    int numNestedBoxes;    
    struct Box **nestedBoxes;
} Box;
int calculateTotalWeight(Box *box) {
    int totalWeight = box->weight;  
    for (int i = 0; i < box->numNestedBoxes; i++) {
        totalWeight += calculateTotalWeight(box->nestedBoxes[i]);}
    return totalWeight;}
Box* createBox(int weight, int numNestedBoxes) {
    Box *newBox = (Box*)malloc(sizeof(Box));
    newBox->weight = weight;
    newBox->numNestedBoxes = numNestedBoxes;
    newBox->nestedBoxes = (Box**)malloc(numNestedBoxes * sizeof(Box*));
    return newBox;}
int main() {
    Box *box1 = createBox(10, 0);
    Box *box2 = createBox(20, 1);
    Box *box3 = createBox(30, 2);
box2->nestedBoxes[0] = box1;
    box3->nestedBoxes[0] = box1;
    box3->nestedBoxes[1] = box2;
int totalWeight = calculateTotalWeight(box3);
printf("Total weight of box3: %d\n", totalWeight);
free(box1->nestedBoxes);
    free(box1);
    free(box2->nestedBoxes);
    free(box2);
    free(box3->nestedBoxes);
    free(box3);
return 0;
}

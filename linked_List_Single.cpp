#include <iostream>
using namespace std;

struct Music
{
 string judul;
 string pencipta;

 Music *next;
} *head, *tail, *newNode, *current;

void initLinkedLIst(string judul, string pencipta)
{
 head = new Music();
 head->judul = judul;
 head->pencipta = pencipta;
 head->next = NULL;
 tail = head;
}

void inputTail(string judul, string pencipta)
{
 newNode = new Music();
 newNode->judul = judul;
 newNode->pencipta = pencipta;
 newNode->next = NULL;
 tail->next = newNode;
 tail = newNode;
}

void inputHead(string judul, string pencipta)
{
 newNode = new Music();
 newNode->judul = judul;
 newNode->pencipta = pencipta;
 newNode->next = head;
 head = newNode;
}

void delTail()
{
 Music *deleteNode = tail;
 current = head;
 while (current->next != tail)
 {
  current = current->next;
 }
 tail = current;
 tail->next = NULL;
 delete deleteNode;
}

void delHead()
{
 Music *deleteNode = head;
 head = head->next;
 delete deleteNode;
}

void printList()
{
 current = head;
 while (current != NULL)
 {
  cout << "Judul Lagu: " << current->judul << endl;
  cout << "Pencipta Lagu: " << current->pencipta << endl;
  current = current->next;
 }
 cout << "\n\n";
}

int main()
{
 initLinkedLIst("Odo", "Ado");
 printList();
 inputTail("aria of light", "yuyu");
 printList();
 inputTail("uusewa", "Ado");
 printList();
 delTail();
 printList();
 inputHead("uusewa", "Ado");
 printList();
 delHead();
 printList();
 return 0;
}

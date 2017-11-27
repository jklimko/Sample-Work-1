#include "ItemType.h"
#include "UnsortedType.h"

void Print( UnsortedListByArray& list)
// Pre:  list has been initialized.         
// Post: Each component in list has been written. 
// 
{
  int length;
  ItemType item;

  list.ResetList( );
  length = list.GetLength( );
  for (int counter = 1; counter <= length; counter++)
  {
    list.GetNextItem(item);
    item.Print( );
  }
}

int main(){

    UnsortedListByArray listOne, listTwo, list;

    ItemType x;
    x.Initialize(2);
    listOne.InsertItem(x);
    
    cout << "List one: ";
    Print(listOne);

    ItemType y;
    y.Initialize(6);
    listTwo.InsertItem(y);

    ItemType Key;
    Key.Initialize(3);
    listOne.InsertItem(Key);    
    
    cout << "List two: ";    
    Print(listTwo);

    list.Merge(listOne, listTwo);
    cout << "Mergerd List: ";
    Print(list);
	
    listOne.MakeEmpty();
    listTwo.MakeEmpty();
    cout<<listOne.IsEmpty()<<endl;

    list.Split(listOne, listTwo, Key);
    cout << "List One: ";
    Print(listOne);
    cout << "List Two: ";
    Print(listTwo);
   
    return 0;
}

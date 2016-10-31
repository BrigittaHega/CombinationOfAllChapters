

/*Design anInventory class that can hold information and calculate data for items in a
retail store’s inventory. The class should have the followingprivate member variables:
	
Variable Name  Description
itemNumberAnint that holds the item’s item number.
quantityAnint for holding the quantity of the items on hand.
costAdouble for holding the wholesale per-unit cost of the item
totalCostAdouble for holding the total inventory cost of the item (calculated asquantity timescost ).

The class should have the followingpublic member functions:

Member Function  Description
----------------------------
Default: Constructor Sets all the member variables to 0.

Constructor #2: Accepts an item’s number, cost, and quantity as arguments.
The function should copy these values to the appropriate
member variables and then call thesetTotalCost function.

setItemNumberAccepts: an integer argument that is copied to the
itemNumber member variable.

setQuantityAccepts: an integer argument that is copied to thequantity
member variable.

setCostAccepts: a double argument that is copied to thecost
member variable.

setTotalCostCalculates: the total inventory cost for the item (quantity
timescost) and stores the result intotalCost.

getItemNumber: Returns the value initemNumber.

getQuantity: Returns the value inquantity.

getCost: Returns the value incost.

getTotalCost: Returns the value intotalCost.

Demonstrate the class in a driver program.
Input Validation: Do not accept negative values for item number, quantity, or cost.

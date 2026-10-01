#include<stdio.h>
int main(){
    int n;
    int category;
    //counters for each category
    int regular_count=0;
    int premium_count=0;
    int recliner_count=0;

    double total_price=0.0;
    double final_amount=0.0;


//1.ask the user how many tickets(n) are being booked
printf("enter number of tickets:");
scanf("%d",&n);

//2.loop n times and ask for ticket category
for(int i=1; i<=n; i++){
    printf("enter category for ticket %d(1/2/3):",i);
    scanf("%d",&category);

//3.&4. add correct price and update individual category  counters
if(category==1){
    regular_count++;
    total_price+=150;
}else if(category==2){
    premium_count++;
    total_price+=250;
}else if(category==3){
    recliner_count++;
    total_price+=400;
}
}
//5.calculate discount if tckets>=5
int discount_applied=0;
if(n>=5){
    discount_applied=1;
    final_amount=total_price*0.90;
    // apply 10% discount
}else{
    final_amount=total_price;
}
//print the final bill matching the require format
printf("\n--final bill --\n");
printf("regular tickets:%d\n",regular_count);
 printf("Premium tickets: %d\n", premium_count);
    printf("Recliner tickets: %d\n", recliner_count);
    printf("Total (before discount): %.0f\n", total_price);
    
    if (discount_applied) {
        printf("Discount applied: Yes\n");
    } else {
        printf("Discount applied: No\n");
    }
    printf("final amount:%.0f\n",final_amount);

    return 0;
}


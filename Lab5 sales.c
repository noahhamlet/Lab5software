int main() {
    float Jansales;
    float Febsales;
    float Marsales;
    float Aprsales;
    float Maysales;
    float Junsales;
    float Julsales;
    float Augsales;
    float Sepsales;
    float Octsales;
    float Novsales;
    float Decsales;
    char maxmonth;
    char minmonth;
    float sum;


    printf("Enter sales numbers");
    printf('\n');
    scanf('%d',&Jansales);
    printf('\n');
    scanf('%d',&Febsales);
    printf('\n');
    scanf('%d',&Marsales);
    printf('\n');
    scanf('%d',&Aprsales);
    printf('\n');
    scanf('%d',&Maysales);
    printf('\n');
    scanf('%d',&Junsales);
    printf('\n');
    scanf('%d',&Julsales);
    printf('\n');
    scanf('%d',&Augsales);
    printf('\n');
    scanf('%d',&Sepsales);
    printf('\n');
    scanf('%d',&Octsales);
    printf('\n');
    scanf('%d',&Novsales);
    printf('\n');
    scanf('%d',&Decsales);
    char months[12]={'January','February','March','April','May','June','July','August','September','October','Novemnber','December'};
    float sales[12]={Jansales,Febsales,Marsales,Aprsales,Maysales,Junsales,Julsales,Augsales,Sepsales,Octsales,Novsales,Decsales};
    int size=sizeof(sales);
    float max = sales[0];
    float min = sales[0];
    for(int i=0;i<size; i++){
        sum += sales[i];
    }
    float avgsales = sum/sizeof(sales);
    printf('\n');
    printf('Monthly sales report for 2024');
    printf('\n');
    printf(months[0],sales[0]);
    printf('\n');
    printf(months[1],sales[1]);
    printf('\n');
    printf(months[2],sales[2]);
    printf('\n');
    printf(months[3],sales[3]);
    printf('\n');
    printf(months[4],sales[4]);
    printf('\n');
    printf(months[5],sales[5]);
    printf('\n');
    printf(months[6],sales[6]);
    printf('\n');
    printf(months[7],sales[7]);
    printf('\n');
    printf(months[8],sales[8]);
    printf('\n');
    printf(months[9],sales[9]);
    printf('\n');
    printf(months[10],sales[10]);
    printf('\n');
    printf(months[11],sales[11]);
    for(int i=1; i<size; i++){
        if(sales[i]>max){
            max = sales[i];
            char maxmonth = sales[i];
        }
    }
    for(int i=1; i<size; i++){
        if(sales[i]<min){
            min = sales[i];
            char minmonth = sales[i];
        }
    }
    printf('\n');
    printf('sales summary report');
    printf('\n');
    printf('Maximum sales:',max, maxmonth);
    printf('\n');
    printf('minimum sales;',min,minmonth);
    printf('\n');
    printf ('average sales:', avgsales);
    
}
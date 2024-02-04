/*finding the missing number*/
/*method 1 by sorting*/
sort(vector.begin() , vector.end());
for(int i=0 ; i<n ; i++){
    if(vector[i]!= 1+i){
        return i+1;
    }
}

/*by adding and finding out */
int count =0;
for(int i=0 ; i< n ; i++){
    count = count + vector[i];
}
int sum = (n*(n+1))/2;

return sum -  count ;
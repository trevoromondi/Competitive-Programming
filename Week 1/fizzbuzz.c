/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n, int* returnSize){
    int x;
    *returnSize = n;
    char ** returnArr = (char**)malloc(sizeof(char*)*n);

    for (x = 0; x < n; x++)
    {
        returnArr[x] = (char*)malloc(sizeof(char) * 9);
    }
    
    
    for(x = 1; x <= n; x++)
    {
        if(x % 3 == 0 && x % 5 == 0)
        {
            strcpy(&returnArr[x - 1][0], "FizzBuzz");
        }
        else if(x % 3 == 0)
        {
            strcpy(&returnArr[x - 1][0], "Fizz");;
        }
        else if(x % 5 == 0)
        {
            strcpy(&returnArr[x - 1][0], "Buzz");;
        }
        else
        {
            sprintf(&returnArr[x - 1][0], "%i", x);
        }
    }
    return &returnArr[0];
}
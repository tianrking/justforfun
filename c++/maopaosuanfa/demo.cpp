for(j=0;j<l;j++)
        for(i=0;i<(l-j);i++)
            if(arr[i]>arr[i+1]){t=arr[i];arr[i]=arr[i+1];arr[i+1]=t;}//swap
    return ;

ui;let arr=[9,8,7,6,5,4,3,2,1];

function partition(arr,start,end){
let pivot= arr[start]
let i= start;
let j = end;
while(i<j){
while(i<end && arr[i]<=pivot){
    i++;
}
while(j>start && arr[j]>pivot) j--;

if(i<j){
    [arr[i],arr[j]]=[arr[j],arr[i]];
}


}
[arr[start],arr[j]]=[arr[j],arr[start]]
return j;

}
function quickSort(arr,start,end){
if(start>=end){
    return
}
let p = (partition(arr,start,end))
quickSort(arr,start,p-1)
quickSort(arr,p+1,end)

}
quickSort(arr,0,arr.length-1)

for(a of arr){
    process.stdout.write(`${a} `)
}